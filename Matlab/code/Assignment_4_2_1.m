clear

x=2.3:0.1:2.8;
y=[4.7873,4.7079,5.3873,5.2038,6.0311,6.4525];
a=[1,1,1,1,1,1];

z=log(y);

A=[x*x',x*a';x*a',6];
b=[x*z';z*a'];
answer=A\b;
disp(answer)
disp(exp(answer(2)))