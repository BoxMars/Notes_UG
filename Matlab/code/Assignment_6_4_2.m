clear
clc
h=(3*pi)/14;
answer=f(0)+f(3*pi);
for i=1:1:7
    a=2*i-1;
    x=a*h;
    answer=answer+4*f(x);
    a=2*i;
    x=a*h;
    answer=answer+2*f(x);
end
answer=answer*h/3

function y=f(x)
    y=sqrt((cos(x))^2+4*(sin(2*x))^2+1);
end


