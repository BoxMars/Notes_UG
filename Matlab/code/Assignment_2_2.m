x_0=1;
x_1=2;
e_0=sqrt(2)-x_0;
e_1=sqrt(2)-x_1;
p=(1+sqrt(5))/2;
n=0;
while abs(e_1)>10^(-10)
    t=x_1;
    x_1= x_1-((x_1-x_0)*Assignment_2_2_f(x_1))/(Assignment_2_2_f(x_1)-Assignment_2_2_f(x_0));
    x_0=t;
    e_0=e_1;
    e_1=sqrt(2)-x_1;
    answer=abs(e_1/(e_0^p));
    n=n+1;
    fprintf('%2d-th loop,x=%9.8f, %9.8f\n',n,x_1,answer)
end