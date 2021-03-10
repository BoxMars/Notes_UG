clear all
x=2; y=1; z=5;
sig=1; r=3; b=1;
d=zeros(3,1); rhs=d;
A=zeros(3);n=0;
for i=1:10
    A(1,1)=-sig;  A(1,2)=sig;    A(1,3)=0;
    A(2,1)=r-z;    A(2,2)=-1;     A(2,3)=-x;
    A(3,1)=y;       A(3,2)=x;      A(3,3)=-b;
    rhs(1)=-sig*(y-x);
    rhs(2)=-(r*x-y-x*z);
    rhs(3)=-(x*y-b*z);
    d=A\rhs;
    x=x+d(1); y=y+d(2); z=z+d(3);
    n=n+1;
    if abs(d(1))<0.001 || abs(d(2))<0.001||abs(d(3))<0.001
        break;
    end
end
disp([x,y,z]')
fprintf("Loop run %d times\n",n)
