clear
x=0.4:0.5:5.9;
y=[0.7486,0.2931, 0.9360 ,0.6443 ,1.4025, 0.4456 ,0.0892 ,-0.9523 ,-1.0688 ,-1.0506 ,-0.4982 ,-0.4433];
a=[1,1,1,1,1,1,1,1,1,1,1,1];
z=sin(x);
A=[z*z',z*a';z*a',6];
b=[z*y';y*a'];
answer=A\b;
disp(answer)