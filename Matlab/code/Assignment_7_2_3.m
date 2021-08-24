clear
clc
f=@(t,y) [y(2);-y(1)];
[t,y]=ode45(f,[0 pi/2],[0 -1]);
plot(t,y(:,1),'-o',t,y(:,2),'-.')
grid on
xlabel('t')
ylabel('y(x)')
legend('y','y1')