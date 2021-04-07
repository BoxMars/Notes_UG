clear
x=[2,4,6,8,10,12];
y=[2,4,4,5,5,7];
A=vander(x);
c=A\y';
xx=0:0.01:12;
yy=polyval(c,xx);
plot(xx,yy,x,y,'ro')