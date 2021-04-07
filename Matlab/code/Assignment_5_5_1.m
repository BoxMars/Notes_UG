clear
x=-1:1;
y=-1:1;
z=1./(1+x.^2+y'.^2);
res1=interp2(x,y',z,1,0.5)
res2=interp2(x,y',z,0.5,0.5)
