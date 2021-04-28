clear
clc
g=@(x) besselj(0,x);
x=0:0.01:20;
y=g(x);
plot(x,y)
h=20/30;
answer=g(0)+g(20);
for i=0:1:14
    a=2*i+1;
    x=a*h;
    answer=answer+4*g(x);
    a=2*i;
    x=a*h;
    answer=answer+2*g(x);
end
answer=answer-2*g(0);
answer=answer*h/3