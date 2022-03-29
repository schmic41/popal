function eval_result = eval_bf(basis_func,xyz)
% Destroys readability, but marginally improves speed?
% (Penny-wise, pound-foolish...)
r = xyz-basis_func.A;
rA2 = sum(r.^2,2);

eval_result = sum((r(:,1)).^basis_func.a(1).*(r(:,2)).^basis_func.a(2).*(r(:,3)).^basis_func.a(3)...
    .*basis_func.N.*basis_func.d.*exp(-basis_func.alpha .* rA2),2)';
end