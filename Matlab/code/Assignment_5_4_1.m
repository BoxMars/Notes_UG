clear
a=0:1:10;
x=-5+(10.*a)./10;
y=1./(1+x.^2);
t=4.8;
res=interp1(x,y,t)

