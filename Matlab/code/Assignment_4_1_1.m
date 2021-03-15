clear
x=[2,4,6,8,10,12];
y=[2,4,4,5,5,7];
a=[1,1,1,1,1,1];
A=[x*x',x*a';x*a',6];
b=[x*y';y*a'];
answer=A\b;
disp(answer);