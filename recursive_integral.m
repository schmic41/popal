function integral_result = recursive_integral(P,p,C,m,A,B,a,b,K)
if a(1) > 0
    integral_result = ((P(1)-A(1))*recursive_integral(P,p,C,m,A,B,(a-[1 0 0]),b,K))+((C(1)-P(1))*recursive_integral(P,p,C,m+1,A,B,(a-[1 0 0]),b,K))+(((a(1)-1)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[2 0 0]),b,K)-recursive_integral(P,p,C,m+1,A,B,(a-[2 0 0]),b,K)))+((b(1)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[1 0 0]),(b-[1 0 0]),K)-recursive_integral(P,p,C,m+1,A,B,(a-[1 0 0]),(b-[1 0 0]),K)));
elseif a(2) > 0
    integral_result = ((P(2)-A(2))*recursive_integral(P,p,C,m,A,B,(a-[0 1 0]),b,K))+((C(2)-P(2))*recursive_integral(P,p,C,m+1,A,B,(a-[0 1 0]),b,K))+(((a(2)-1)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[0 2 0]),b,K)-recursive_integral(P,p,C,m+1,A,B,(a-[0 2 0]),b,K)))+((b(2)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[0 1 0]),(b-[0 1 0]),K)-recursive_integral(P,p,C,m+1,A,B,(a-[0 1 0]),(b-[0 1 0]),K)));
elseif a(3) > 0
    integral_result = ((P(3)-A(3))*recursive_integral(P,p,C,m,A,B,(a-[0 0 1]),b,K))+((C(3)-P(3))*recursive_integral(P,p,C,m+1,A,B,(a-[0 0 1]),b,K))+(((a(3)-1)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[0 0 2]),b,K)-recursive_integral(P,p,C,m+1,A,B,(a-[0 0 2]),b,K)))+((b(3)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[0 0 1]),(b-[0 0 1]),K)-recursive_integral(P,p,C,m+1,A,B,(a-[0 0 1]),(b-[0 0 1]),K)));
elseif b(1) > 0
    integral_result = ((P(1)-B(1))*recursive_integral(P,p,C,m,A,B,a,(b-[1 0 0]),K))+((C(1)-P(1))*recursive_integral(P,p,C,m+1,A,B,a,(b-[1 0 0]),K))+(((b(1)-1)/(2*p))*(recursive_integral(P,p,C,m,A,B,a,(b-[2 0 0]),K)-recursive_integral(P,p,C,m+1,A,B,a,(b-[2 0 0]),K)))+((a(1)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[1 0 0]),(b-[1 0 0]),K)-recursive_integral(P,p,C,m+1,A,B,(a-[1 0 0]),(b-[1 0 0]),K)));
elseif b(2) > 0
    integral_result = ((P(2)-B(2))*recursive_integral(P,p,C,m,A,B,a,(b-[0 1 0]),K))+((C(2)-P(2))*recursive_integral(P,p,C,m+1,A,B,a,(b-[0 1 0]),K))+(((b(2)-1)/(2*p))*(recursive_integral(P,p,C,m,A,B,a,(b-[0 2 0]),K)-recursive_integral(P,p,C,m+1,A,B,a,(b-[0 2 0]),K)))+((a(2)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[0 1 0]),(b-[0 1 0]),K)-recursive_integral(P,p,C,m+1,A,B,(a-[0 1 0]),(b-[0 1 0]),K)));
elseif b(3) > 0
    integral_result = ((P(3)-B(3))*recursive_integral(P,p,C,m,A,B,a,(b-[0 0 1]),K))+((C(3)-P(3))*recursive_integral(P,p,C,m+1,A,B,a,(b-[0 0 1]),K))+(((b(3)-1)/(2*p))*(recursive_integral(P,p,C,m,A,B,a,(b-[0 0 2]),K)-recursive_integral(P,p,C,m+1,A,B,a,(b-[0 0 2]),K)))+((a(3)/(2*p))*(recursive_integral(P,p,C,m,A,B,(a-[0 0 1]),(b-[0 0 1]),K)-recursive_integral(P,p,C,m+1,A,B,(a-[0 0 1]),(b-[0 0 1]),K)));
elseif a(1) < 0 || a(2) < 0 || a(3) < 0 || b(1) < 0 || b(2) < 0 || b(3) < 0
    integral_result = 0;
elseif a(1) == 0 && a(2) == 0 && a(3) == 0 && b(1) == 0 && b(2) == 0 && b(3) == 0
    T = p*((norm(P-C))^2);
    integral_result = ((2*pi)/p)*K*boysF(m,T);
else
    error('Unclear angular momenta in recursion function!');
end
end