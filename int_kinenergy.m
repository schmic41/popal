function T = int_kinenergy(basis)
T = zeros(length(basis),length(basis));
for basis1 = 1:length(basis)
    for basis2 = 1:length(basis)
        u = basis(basis1);
        v = basis(basis2);
        t=0;
        A = u.A;
        B = v.A;
        for k = 1:length(u.d)
            for m = 1:length(v.d)
                alpha = u.alpha(k);
                beta = v.alpha(m);
                a = u.a;
                b = v.a;
                p = alpha + beta;
                K = exp(((-alpha*beta)/(p))*norm(A-B).^2);
                P = (((alpha*A) + (beta*B))/(p));
                t = t+(u.d(k)*v.d(m)*u.N(k).*v.N(m))*Iw(beta,a,b,p,A,B,P,K);
            end
        end
        T(basis1, basis2) = t;
    end
end
end

