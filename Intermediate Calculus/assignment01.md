### Assignment 1
### Zhang Huakang DB927606
---
### 1.
#### (i)
|$i$|$f(x_i)$|
|-|-|
|$0$|$1$|
|$1$|$\frac 1 2 $|
|$2$|$\frac 1 5$|
|$3$|$\frac 1 {10}$|
|$4$|$\frac 1 {17}$|
|$5$|$\frac 1 {26}$|
|$6$|$\frac 1 {37}$|
|$7$|$\frac 1 {50}$|
|$8$|$\frac 1 {65}$|
|$9$|$\frac 1 {82}$|
|$10$|$\frac 1 {101}$|
##### $$\int _0^1 \frac 1 {1+x^2}dx\approx \sum _{i=1} ^{10} \frac {f(x_{i-1})+f(x_i)}{2} \frac{1}{10}=0.7849814972\approx 0.7850$$
#### (ii)
##### $$f(x) =\frac 1 {1+x^2} $$
##### $$f'(x)= - \frac {2x} {(1+x^2)^2}$$
##### $$f''(x)= \frac {6x^2-2}{(1+x^2)^3}$$
##### $$K_2\geq f''(x)_{max}=\frac 1 2$$
##### $$|Error \ of\  Trapezoidal\  Approximation|\leq \frac{K_2(b-a)^3}{12n^2} \leq 0.0001$$
##### $$n \geq \frac {25\sqrt 6}{3}\approx 20.41$$
##### $$n \geq   21 $$
### 2.
#### (i)
##### $$f(x)=\frac{\sin x }{x}$$
##### $$T_n = \sum _{i=1}^{10} \frac{f(x_{i-1})+f(x_i)}{2} \Delta x$$
##### $$M_n = \sum _ {i=1}^{10}f(\frac {x_{i-1}+x_i}{2})\Delta x$$
##### $$S_n = \frac 2 3 M_n+\frac 1 3 T_n$$
##### $$S_n\approx 1.8519$$
#### (ii)
##### $$|Error \ of\  Simpson's\  Approximation|\leq \frac{K_4(b-a)^5}{180n^4} \leq 5 \times 10^{-8}$$
##### $$n\geq53.99$$
##### $$n\geq 54$$
### 3.
##### $Proof:$
##### $$Left\ side=A=\int _a ^b f(x)=\int _a ^b px^2+qx+r=\frac p 3 x^3 + \frac q 2 x^2 + rx|_a^b$$
##### $$=\frac p 3 (b^3-a^3)+\frac q 2 (b^2-a^2)+r(b-a)=(b-a)[\frac p 3 (b^2+ab+a^2)+\frac q 2 (b+a)+r]$$
##### $$Right\ side =\frac 1 3 \times \frac{b-a}{2}[f(a)+4f(\frac{b+a}{2})+f(b)]=$$ 
##### $$=\frac{b-a} 6 \left\{pa^2+qa+r+4[\frac p 4(b+a)^2+\frac q 2 (b-a)+r]+pb^2+qb+r\right\} $$
##### $$=(b-a)[\frac p 3 (b^2+ab+a^2)+\frac q 2 (b+a)+r] $$$$Left\ side = Right\ side$$
##### $$A=\frac 1 3 \times \frac{b-a}{2}[f(a)+4f(\frac{b+a}{2})+f(b)]$$
### 4.
#### (i)
##### Let $t=\ln x,$$dt = \frac {dx}{x}$, and $x=e^t$
##### Hence,$$\int \sin(\ln x)dx=\int \sin t\ e^tdt$$
##### Let $$u=\sin t,v'=e^t$$
##### $$u'=\cos t, v= e^t$$
##### $$\int \sin t \ e^tdt=\sin t \ e^t-\int \cos t\ e^tdt$$
##### Let $$m=\cos t,n'=e^t$$
##### $$m'=-\sin t,n=e^t$$
##### Hence, $$\int \cos t\ e^tdt=\cos t\ e^t+\int\sin t \ e^tdt$$
##### $$\int\sin (\ln x)dx=\int \sin t\ e^tdt=\sin t\ e^t-\int \cos t \ e^t dt$$$$=sin t\  e^t-(\cos t\ e^t+\int\sin t \ e^tdt)$$
##### $$\int\sin t \ e^tdt=\frac{\sin t\ e^t-\cos t\ e^t}{2}$$
##### $$\int \sin(\ln x)=\frac{x\sin(\ln x)-x\cos(\ln x)}{2}+C$$
#### (ii)
##### Let $u=xe^x$,$v'=\cos x$, so, $u'=e^x(x+1),v=\sin x$
##### $$\int xe^x\cos x dx=xe^x\sin x -\int e^x(x+1)\sin x dx$$$$=xe^x\sin x -\int e^xx\sin x dx-\int e^x\sin xdx$$
##### Let $u=e^xx$,$v'=\sin x$, so, $u'=e^x(x+1)$,$v=-\cos x$
##### $$\int e^xx\sin x dx = -e^xx\cos x+\int e^x(x+1)\cos x dx$$
##### $$\int xe^x\cos x dx= xe^x\sin x + e^xx\cos x -\int xe^x\cos x dx-\int e^x\cos x dx -\int e^x \sin x dx$$
##### $$2\int xe^x\cos x dx=xe^x\sin x +xe^x\cos x-\int e^x\cos x dx -\int e^x \sin x dx$$
##### Let $u=e^x$,$v'=\cos x$, so, $u'=e^x$,$v=\sin x$
##### $$\int e^x\cos x dx=e^x\sin x -\int e^x\sin x dx$$
##### Hence,$$\int xe^x\cos x dx=\frac{e^x\sin x (x-1)+xe^x\cos x}{2}$$
### 5.
#### (i)
##### We know that $$(f^{-1})'=\frac 1 {f'(f^{-1}(x))}$$
##### Let $u=f^{-1}(x)$,$v'=1$, so,$u'=\frac 1 {f'(f^{-1}(x))}$,$v=x$
##### $$\int f^{-1}(x)dx=xf^{-1}(x)-\int \frac{x}{f'(f^{-1}(x))}dx$$
##### Because$\frac{dy}{dx}=\frac 1 {f'(f^{-1}(x))}$, and $y=f^{-1}(x)$, so $x=f(x)$
##### Hence$$\int f^{-1}(x)dx=xf^{-1}(x)-\int f(y)dy$$
#### (ii)
##### $$\int\cos^{-1}(x)dx=x\cos^{-1} x-\int \cos y dy$$where $y=\cos^{-1} x$
##### $$\int\cos^{-1}(x)dx=x\cos x -\sin y=x\cos^{-1} x -\sin\cos^{-1}x$$
##### Because $\sin^2\theta+\cos^2\theta=1$, let $\theta=\cos^{-1}x$
##### Hence $\sin \theta=\sqrt{1-x^2}$
##### $$\int\cos^{-1}(x)dx=x\cos x -\sqrt{1-x^2}$$
### 6.
#### (a)
##### Let $u=x^n$, $v'=\cos x$, so, $u'=nx^{n-1}$, $v=\sin x$
##### $$\int x^n\cos xdx =x^n\sin x-\int nx^{n-1}\sin xdx $$
##### Let $u=nx^{n-1}$, $v'=\sin x$, so, $u'=n(n-1)x^{n-2}$, $v=-\cos x$
##### $$\int nx^{n-1}\sin xdx=-nx^{n-1}\cos x +\int n(n-1)x ^{n-2}\cos xdx $$
##### $$\int x^n\cos xdx =x^n\sin x+nx^{n-1}\cos x -\int n(n-1)x ^{n-2}\cos xdx $$
#### (b)
##### Let $u=x$, $v'=\cos x $, so, $u'=1$, $v=\sin x $
##### $$\int x\cos x dx = x\sin x -\int \sin x dx=x\sin x +\cos x$$
#### (c)
##### $$\int x^5\cos x dx=x^5\sin x +5x^4\cos x-20\int\cos x dx$$$$ =x^5\sin x +5x^4\cos x-20(x^3\sin x+3x^2\cos x -6\int x\cos x dx )$$$$=x^5\sin x +5x^4\cos x-20x^3\sin x-60x^2\cos x+120x\sin x +120\cos x  $$
##### $$\int_0^\pi x^5\cos x dx=x^5\sin x +5x^4\cos x-20x^3\sin x-60x^2\cos x+120x\sin x +120\cos x  \bigg|_0^\pi$$$$=-5\pi^4+60\pi^2-240$$