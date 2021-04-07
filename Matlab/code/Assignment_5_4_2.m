clear
a=0:1:10;
x=-5+(10.*a)./10;
y=1./(1+x.^2);
xx=-5:0.01:5;
y1=1./(1+xx.^2);
y2 = spline(x,y,xx);
plot(xx,y1,xx,y2)