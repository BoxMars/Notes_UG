clear
clc
y=1:1:20;
x=1:1:20;
for i=1:1:20
    i
    e1=abs(sin(10)-simpson(i));
    e2=abs(sin(10)-simpson(i+1));
    e=e1/e2
    y(i)=e1;
end
semilogy(x,y)


function answer=simpson(n)
    answer=f(0);
    d=10.0/2^n;
    for i=1:1:2^(n-1)
        answer=answer+f(10*(2*i-1)/2^n)*4;
    end
    for i=1:1:2^(n-1)-1
        answer=answer+f(10*(2*i)/2^n)*2;
    end
    answer=answer+f(10);
    answer=d/3*answer;
end

function y=f(x)
    y=cos(x);
end