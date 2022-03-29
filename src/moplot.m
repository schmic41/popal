function moplot(atoms,xyz1,out,iMO,level)
clf;
xyzn = xyz1./0.52917721067;

m = max(max(xyzn));
i = min(min(xyzn));
extraspace = 2;
m=m + extraspace;
i = -m;
step=0.1;
x = i:step:m;
xyz = [x',x',x'];

MOcoeffs = out.C(:,iMO);


size1=length(xyz);
len=length(xyz);

posvolume = zeros(len,len,len);
negvolume = zeros(len,len,len);
for tempx = 1:size1
    for tempy = 1:size1
        for tempz = 1:size1
            tempsum = 0;
            x1 = xyz(tempx,1);
            y1 = xyz(tempy,2);
            z1 = xyz(tempz,3);
            for basis = 1:length(out.basis)
                tempsum = tempsum + (eval_bf(out.basis(basis),[x1,y1,z1]) * MOcoeffs(basis));
            end
            
            if tempsum >= 0
                posvolume(tempx,tempy,tempz) = tempsum;
            else
                negvolume(tempx,tempy,tempz) = tempsum;
            end
            
        end
    end
end
posvolume = permute(posvolume,[2 1 3]);
negvolume = permute(negvolume,[2 1 3]);

negvolume=abs(negvolume);
sizeN= 10.*(weight(atoms))./(0.5.*atoms);
hold on;

atomindex=0;
for numatoms=1:length(atoms)
    atomindex=atomindex+1;
    scatter3(xyzn(atomindex,1),xyzn(atomindex,2),xyzn(atomindex,3),sizeN(atomindex),'filled','k');
end

axis ([i,m,i,m,i,m]);
patch(isosurface(x,x,x,posvolume,level),'FaceAlpha',0.3,'EdgeAlpha',0.20,'EdgeColor','blue','FaceColor','blue');
patch(isosurface(x,x,x,negvolume,level),'FaceAlpha',0.3,'EdgeAlpha',0.20,'EdgeColor','red','FaceColor','red');
grid on;
title('MO Plot');
xlabel('x (Bohr)');
ylabel('y (Bohr)');
zlabel('z (Bohr)');
view(10,6);
axis equal;
hold off;
end