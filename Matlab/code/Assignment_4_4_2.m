clear
load A4Q4data
plot(x,y,'o');
hold on
z=0.9156+0.8796.*x+2.1602.*(x.^2)+1.0880.*(x.^3);
plot(x,z)
