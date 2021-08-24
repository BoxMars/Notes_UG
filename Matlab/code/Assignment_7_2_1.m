x0=0;
x10=-1;
x1=0;
x11=0;
for i=1:5
    x11=x10+(pi/10)*(-x0);
    x1=x0+(pi/10)*x11;
    x0=x1;
    x10=x11;
    error=-sin(i*(pi/10))-x1;
    disp("x"+i+": "+x1+", error:"+error)
end