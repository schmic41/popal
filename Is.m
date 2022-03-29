function Is = Is (a,b,p,P,A,B)
Is = 0;
if a < 0 || b < 0
    Is = 0;
else
    for i = 0:((a+b)/2)
        Is = Is + ((doublefact((2*i)-1)/((2*p)^i))*fofk(2*i,a,b,P,A,B));
    end
end
end