x=1;y=2;
d=zeros(2,1); rhs=d;
answer=[x,y];
A=zeros(2);

for i=1:10
    fx=Assignment_3_4_fx(answer(1),answer(2));
    fy=Assignment_3_4_fy(answer(1),answer(2));
    gx=Assignment_3_4_gx(answer(1),answer(2));
    gy=Assignment_3_4_gy(answer(1),answer(2));
    
    f=Assignment_3_4_f(answer(1),answer(2));
    g=Assignment_3_4_g(answer(1),answer(2));
    
    A(1,1)=fx; A(1,2)=fy;
    A(2,1)=gx; A(2,2)=gy;
    
    
    rhs(1)=f;
    rhs(2)=g;
    
    d=A\rhs;
    answer(1)=answer(1)+d(1);
    answer(2)=answer(2)+d(2);
end
disp([answer(1),answer(2)])