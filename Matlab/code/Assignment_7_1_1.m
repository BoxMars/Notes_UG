clear
delta=0.1
n=0;
x0=1;
x1=0;
while (n*delta<=1)
    error=x0-Assignment_7_1_x(n*delta);
    x1=x0+delta*Assignment_7_1_f(x0);
    x0=x1;
    n=n+1;
    fprintf('%10.5f,%10.5f\n',x1,error)
end
disp("----------------------")
clear
delta=0.01
n=0;
x0=1;
x1=0;
while (n*delta<=1)
    error=x0-Assignment_7_1_x(n*delta);
    x1=x0+delta*Assignment_7_1_f(x0);
    x0=x1;
    n=n+1;
    fprintf('%10.5f,%10.5f\n',x1,error)
end