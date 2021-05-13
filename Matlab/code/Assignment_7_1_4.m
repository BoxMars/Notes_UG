clear
tspan=[0 1];
y0=1;
[t,y]=ode45(@(t,y) 2*y-y^2,tspan,y0);
plot(t,y,'-o')
for i=1:41
    error=2/(1+exp(-2*t(i)))-y(i);
    disp("x= "+y(i)+" ,error= "+error)
end
