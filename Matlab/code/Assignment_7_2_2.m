clear
x0=0;
x10=-1;
x1=0;
x11=0;
d=pi/10;
for i=1:5
    l1=d-x0;
    l2=d-(l1+x0);
    x11=x10+(l1+l2)/2;
    k1=d*x11;
    k2=d*cos(k1+x11);
    x1=x0+(k1+k2)/2;
    x0=x1;
    x10=x11;
    error=-sin(i*(pi/10))-x1;
    disp("x"+i+": "+x1+", error:"+error)
end