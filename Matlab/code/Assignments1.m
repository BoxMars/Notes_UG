a=-5:-1:-20
x=10.^a
y1=(sqrt(2+x)-sqrt(2-x))./(2.*x)
y2=1./(sqrt(2+x)+sqrt(2-x))
semilogx(x,y1,x,y2)