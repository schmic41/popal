function fofkr = fofk(k,a,b,P,A,B)
fofkr = 0;
for j = max(0,k-a):min(k,b)
    fofkr = fofkr + (nchoosek(a,(k-j))*nchoosek(b,j)*((P-A)^((a-k)+j))*((P-B)^(b-j)));
end

end