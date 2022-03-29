function [Vxc,Exc,rhoInt] = int_xc(basis,P,grid,ExchFunctional,CorrFunctional,evaluated_funcs)
Cx = ((3/4)*((3/pi)^(1/3)));
Vc = zeros(size(grid.xyz,1),1);
Vx = zeros(size(grid.xyz,1),1);
Ex = zeros(size(grid.xyz,1),1);
Ec = zeros(size(grid.xyz,1),1);

rhoInt = 0;
rho = zeros(size(grid.xyz,1),1);
% Calculate density matrix here
for point = 1:size(grid.xyz,1)
    for r = 1:length(basis)
        for s = 1:length(basis)
            rho(point,1) = rho(point) + (evaluated_funcs(r,point) * evaluated_funcs(s,point) * P(r,s));
        end
    end
    rhoInt = rhoInt + (rho(point)*grid.weights(point));
    
    % Slater exchange functional
    if ExchFunctional == 'Slater'
        Ex(point) = ((rho(point)^(1/3))*-Cx);
        Vx(point) = ((rho(point)^(1/3))*-Cx*(4/3));
    else
        error('ExchFunctional not recognized!');
    end
    
    
    % xr and A are defined here!
    if rho(point) < 1e-10
        Ec(point) = 0;
        Vc(point) = 0;
    else
        xr = (3/(4*pi*rho(point)))^(1/6);
        A = 0.0310907;
        % Correction Functional
        if CorrFunctional == 'VWN3'
            b = 13.0720;
            c = 42.7198;
            x0 = -0.409286;
            Q = sqrt((4*c)-b^2);
            nu = atan(Q/((2*xr)+b));
            
            Ec(point) = (A * (log((xr^2)/(xr^2 + (b*xr) + c)) + ((2*b*nu)/Q)...
                - (((b*x0)/(x0^2 + (b*x0) + c)) * (log(((xr-x0)^2)/(xr^2 + (b*xr) + c)) + ((2*nu*((2*x0)+b)) / Q)))));
            Vc(point) = (Ec(point) - ((A/3) * (((c*(xr-x0)) - (b*xr*x0)) / ((xr^2 + (b*xr) + c) * (xr-x0)))));
            
        elseif CorrFunctional == 'VWN5'
            b = 3.72744;
            c = 12.9352;
            x0 = -0.10498;
            Q = sqrt((4*c)-b^2);
            nu = atan(Q/((2*xr)+b));
            
            Ec(point) = (A * (log((xr^2)/(xr^2 + (b*xr) + c)) + ((2*b*nu)/Q)...
                - (((b*x0)/(x0^2 + (b*x0) + c)) * (log(((xr-x0)^2)/(xr^2 + (b*xr) + c)) + ((2*nu*((2*x0)+b)) / Q)))));
            Vc(point) = (Ec(point) - ((A/3) * (((c*(xr-x0)) - (b*xr*x0)) / ((xr^2 + (b*xr) + c) * (xr-x0)))));
            
        else
            error('CorrFunctional not recognized!');
        end
        Ex(point) = Ex(point) * grid.weights(point);
        Ec(point) = Ec(point) * grid.weights(point);
    end
end
exc = Ex + Ec;
Vxc = zeros(length(basis));

for r = 1:length(basis)
    for s = 1:length(basis)
        tempsum = 0;
        for point = 1:size(grid.xyz,1)
            tempsum = tempsum + ...
                (evaluated_funcs(r,point)*evaluated_funcs(s,point)*grid.weights(point)*(Vx(point)+Vc(point)));
        end
        Vxc(r,s) = tempsum;
    end
end

Exc = 0;
for point = 1:size(grid.xyz,1)
    Exc = Exc + (exc(point) * rho(point));
end

end