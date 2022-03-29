function Vne = int_attraction(atoms,xyz,basis)
Vne = zeros(length(basis),length(basis));
for basis1 = 1:length(basis)
    for basis2 = 1:length(basis)
        u = basis(basis1);
        v = basis(basis2);
        for nuclearindex = 1:length(atoms)
            nuclearcharge = atoms(nuclearindex);
            C = xyz(nuclearindex,:);
            tempsum = 0;
            for k=1:length(u.d)
                for m=1:length(v.d)
                    A = u.A;
                    B = v.A;
                    alpha = u.alpha(k);
                    beta = v.alpha(m);
                    a = u.a;
                    b = v.a;
                    p = alpha + beta;
                    K = exp(-((alpha*beta)/p)*((norm(A-B))^2));
                    P = ((alpha.*A) + (beta.*B))./p;
                    mexp = 0;
                    tempsum = tempsum + (u.d(k)*v.d(m)*u.N(k)*v.N(m)*recursive_integral(P,p,C,mexp,A,B,a,b,K));
                end
            end
            Vne(basis1,basis2) = (Vne(basis1,basis2)+(tempsum*nuclearcharge));
        end
    end
end
Vne = Vne*-1;
end