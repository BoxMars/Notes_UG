clear
load A4Q4data
c1=(x+1-x)';
c2=x';
c3=(x.^2)';
c4=(x.^3)';
A=[c1,c2,c3,c4];
c=A\y'


