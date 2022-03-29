function basis = buildbasis(atoms,xyz,basissetdef)
% Simple error check to make sure we didn't mess up our atoms
% and coordinates.
if size(atoms,2) ~= size(xyz,1)
    error('You have a different number of atoms and coordinates!')
end

Norm_func = @(ax,ay,az,alpha) (2/pi)^(3/4) .* ((2^(ax+ay+az).*(alpha.^(((2*(ax+ay+az))+3)/4)))./(sqrt(doublefact((2*ax) - 1) * doublefact((2*ay) - 1) * doublefact((2*az) - 1))));

% Preallocating the array

% Ugly, but necessary to get an accurate count
alloccount = 0;
for iatom = 1:length(atoms)
    atomicbasis = basissetdef{atoms(iatom)};
    for ibasis = 1:length(atomicbasis)
        alloccount = alloccount + 1;
    end
end

% Create the basic struct alloccount number of times in one dimension, then
% transpose to get columns instead of rows.
basis = repmat(struct('atom',-1,'A',-1,'a',-1,'alpha',-1,'d',-1,'N',-1),alloccount,1).';

% Now we go through and fill the structure in.

% Indexcounter for every equation (1 for S, 3 for P, etc)
indexcounter = 0;

% Now go through every atom...
for iatom = 1:length(atoms)
    % Grab the overall basis set for that atom...
    atomicbasis = basissetdef{atoms(iatom)};
    % Iterate through that basis...
    for ibasis = 1:length(atomicbasis)
        % Find the shelltype...
        if strcmp(atomicbasis(ibasis).shelltype,'S')
            
            % And construct the array for that equation.
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 0 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
        elseif strcmp(atomicbasis(ibasis).shelltype,'SP')
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 0 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs(1,:);
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [1 0 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs(2,:);
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 1 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs(2,:);
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 0 1];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs(2,:);
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
        elseif strcmp(atomicbasis(ibasis).shelltype,'P')
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [1 0 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 1 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 0 1];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
        elseif strcmp(atomicbasis(ibasis).shelltype,'D')
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [2 0 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [1 1 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [1 0 1];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 2 0];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 1 1];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
            indexcounter = indexcounter + 1;
            basis(indexcounter).atom = atoms(iatom);
            basis(indexcounter).A = xyz(iatom,:);
            basis(indexcounter).a = [0 0 2];
            basis(indexcounter).alpha = atomicbasis(ibasis).exponents;
            basis(indexcounter).d = atomicbasis(ibasis).coeffs;
            ax = basis(indexcounter).a(1);
            ay = basis(indexcounter).a(2);
            az = basis(indexcounter).a(3);
            basis(indexcounter).N = Norm_func(ax,ay,az,basis(indexcounter).alpha);
            
        else
            error('Shell not recognized!');
        end
    end
end
end