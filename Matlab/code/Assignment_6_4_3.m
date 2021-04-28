clear
clc
f=quad(@(x) sqrt(cos(x).^2+4*sin(2*x).^2+1),0,3*pi)