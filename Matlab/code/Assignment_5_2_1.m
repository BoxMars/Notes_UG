clear
a=0:1:4;
x=-1+(a./2);
y=exp(x);
A=vander(x);
c=A\y';
axis=-1.5:0.01:1.5;
y1=exp(axis);
y2=polyval(c,axis);
plot(axis,y1,'r',axis,y2,'b')

