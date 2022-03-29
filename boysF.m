function boysresult = boysF(m,T)
boysresult = zeros(length(m));
boysresult = boysresult(1,:);
for index = 1:length(m)
    if T < 1e-200
        boysresult(index) = 1/((2*m(index))+1);
    else
        boysresult(index) = (gamma(m(index)+0.5))*(gammainc(T,m(index)+0.5)/(2*(T^(m(index)+0.5))));
    end
end