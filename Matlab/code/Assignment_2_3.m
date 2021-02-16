clear
n=1:1:9;
y1=1./(10.^n);
y2=1./(100.^n);
y3=1./(2.^(2.^n));
semilogy(n,y1,n,y2,n,y3)
legend('$\frac{1}{10^n}$','$\frac{1}{100^n}$','$\frac{1}{2^{2^n}}$','Location','southwest','Interpreter','latex','FontSize',19)