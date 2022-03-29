function eval_result = eval_bf(basis_func,xyz)
ax = basis_func.a(1);
ay = basis_func.a(2);
az = basis_func.a(3);
A = basis_func.A;
r = xyz-A;
rA2 = sum(r.^2);

eval_result = 0;
for j = 1:length(basis_func.N)
eval_result = eval_result + (r(1))^ax*(r(2))^ay*(r(3))^az*basis_func.N(j)*basis_func.d(j)...
    *exp(-basis_func.alpha(j) * rA2);
end
end