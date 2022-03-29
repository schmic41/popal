function overlap_result = primitive_integral(a,b,p,A,B,P,K)

overlap_result = ((pi/p)^(3/2))*K*Is(a(1),b(1),p,P(1),A(1),B(1))...
                   *Is(a(2),b(2),p,P(2),A(2),B(2))*Is(a(3),b(3),p,P(3),A(3),B(3));

end