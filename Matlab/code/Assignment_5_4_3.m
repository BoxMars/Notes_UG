clear
a=0:1:2;
x=-5+(10.*a)./2;
y=1./(1+x.^2);
xx=-5:0.01:5;
y1=1./(1+xx.^2);
y2 = spline(x,[0,y,0],xx);
plot(xx,y2)