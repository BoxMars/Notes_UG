clear
x0=1.6;
x1=x0-(Assignment_2_1_f(x0)/Assignment_2_1_derivative(x0));
n=0;
fprintf('x(%1d)=%9.8f\n',n,x0)
while abs(x1-x0)>10^(-8)
   x0=x1;
   x1=x0-(Assignment_2_1_f(x0)/Assignment_2_1_derivative(x0));
   n=n+1;
   fprintf('x(%1d)=%9.8f\n',n,x0)
end