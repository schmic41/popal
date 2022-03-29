function out = mocalc(atoms,xyz,totalcharge,settings)
xyz = (xyz./0.52917721067);
N = sum(atoms)-totalcharge;

% Calculating everything that can be calculated without the SCF loop
out.basis = buildbasis(atoms,xyz,basisread(settings.basisset));
out.S = int_overlap(out.basis);
out.T = int_kinenergy(out.basis);
out.Vne = int_attraction(atoms,xyz,out.basis);
out.ERI = int_repulsion(out.basis);

iterations = 0;
iterations_max = 250;

if settings.Method == 'KS'
    grid = molecular_grid(atoms,xyz,settings.nRadialPoints,settings.nAngularPoints);
    evaluated_funcs = zeros(length(out.basis),length(grid.xyz));
    exchangefactor = 0;
    for basis_func = 1:length(out.basis)
        evaluated_funcs(basis_func,:) = eval_bf(out.basis(basis_func),grid.xyz);
    end
else
    exchangefactor = 0.5;
end

P = zeros(length(out.basis));
E0 = 0;
converged = false;

% The SCF loop
while ~converged
    P_old = P;
    E_old = E0;
    
    Vee = zeros(length(out.S),length(out.S));
    for u = 1:length(P)
        for v = 1:length(P)
            tempsum = 0;
            for k = 1:length(P)
                for l = 1:length(P)
                    tempsum = tempsum + (P(k,l)*((out.ERI(u,v,l,k) - (exchangefactor*(out.ERI(u,k,l,v))))));
                end
            end
            Vee(u,v) = tempsum;
        end
    end
    
    if settings.Method == 'KS'
        [Vxc,Exc,~] = int_xc_mex(out.basis,P,grid,settings.ExchFunctional,settings.CorrFunctional,evaluated_funcs);
    else
        Vxc = 0;
        Exc = 0;
    end
    
    F = out.T + out.Vne + Vee + Vxc;
    
    [C,e] = eig(F,out.S);
    [epsilon,idx] = sort(diag(e));
    C = C(:,idx);
    norms = sqrt(diag(C'*out.S*C));
    for iMO = 1:size(C,2)
        C(:,iMO) = C(:,iMO)/norms(iMO);
    end
    C_occ = C(:,1:N/2);
    P = 2*(C_occ*C_occ');
    
    E0 = 0;
    for u = 1:size(P,1)
        for v = 1:size(P,2)
            E0 = E0 + (P(u,v) * (out.T(u,v) + out.Vne(u,v) + (0.5*Vee(u,v))));
        end
    end
    E0 = E0 + Exc;
    iterations = iterations + 1;
    
    if max(max(abs(P_old - P)))<settings.tolDensity && max(abs(E_old - E0))<settings.tolEnergy
        converged = true;
    elseif iterations > iterations_max
        converged = true;
    else
        converged = false;
    end
end
sprintf('Converged in %i iterations.',iterations);

if settings.Method == 'KS'
    [out.Vxc,out.Exc,~] = int_xc_mex(out.basis,P,grid,settings.ExchFunctional,settings.CorrFunctional,evaluated_funcs);
else
    out.Vxc = 0;
    out.Exc = 0;
end

% The rest of the data
% out.Vee, from final P
for u = 1:length(P)
    for v = 1:length(P)
        tempsum = 0;
        for k = 1:length(P)
            for l = 1:length(P)
                tempsum = tempsum + (P(k,l)*((out.ERI(u,v,l,k) - (exchangefactor*(out.ERI(u,k,l,v))))));
            end
        end
        out.Vee(u,v) = tempsum;
    end
end

out.epsilon = epsilon;
out.C = C;
out.P = P;

out.E0 = 0;

for u = 1:size(P,1)
    for v = 1:size(P,2)
        out.E0 = out.E0 + (P(u,v) * (out.T(u,v) + out.Vne(u,v) + (0.5*out.Vee(u,v))));
    end
end
out.E0 = out.E0 + out.Exc;

% Total energy
Vnn = 0;
for A = 1:length(atoms)
    for B = A+1:length(atoms)
        Vnn = Vnn + ((atoms(A)*atoms(B))/(norm(xyz(A,:) - xyz(B,:))));
    end
end
out.Etot = out.E0 + Vnn;
end