clear
a=1;
b=2;
m=(a+b)/2;
n=1;
fprintf('%2dth, a=%9.8f, b=%9.8f, error<%9.8f, m=%9.8f\n',n,a,b,a-b,m)
while (b-a)>10^(-6)
    if Assignment_2_1_f(m)==0
        break
    end
    if sign(Assignment_2_1_f(m))==sign(Assignment_2_1_f(a))
        a=m;
    elseif sign(Assignment_2_1_f(m))==sign(Assignment_2_1_f(b))
        b=m;
    end
    m=(a+b)/2;
    n=n+1;
    fprintf('%2dth, a=%9.8f, b=%9.8f, error<%9.8f, m=%9.8f\n',n,a,b,a-b,m)
end

