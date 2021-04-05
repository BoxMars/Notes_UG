### Assignment 1
### Zhang Huakang DB927606
---
### 1.
##### Let $u=e^x$, $du=e^xdx$
##### $$\int e^x\sin^4 e^x\cos^2e^xdx$$$$=\int \sin^4u\cos^2u du$$$$=\int \sin ^4 u(1-\sin^2u)du$$$$=\int\sin^4udu-\int\sin^6udu$$
##### For $\int sin^n xdx$, where $n=2k$, $k\in \Z$:
##### We use the substitution:
##### $$m=sin^{n-1}x, n'=\sin x$$
##### $$m'=(n-1)\sin ^{n-2}x\cos x, n=-\cos x$$
##### $$\int \sin^n x dx=-\sin^{n-1}x\cos x+(n-1)\int\sin^{n-2}x\cos^2xdx$$$$=-\sin^{n-1}x\cos x+(n-1)\int\sin^{n-2}(1-\sin^2x)dx$$$$=-\sin^{n-1}x\cos x+(n-1)\int\sin^{n-2}xdx-(n-1)\int\sin^nxdx$$
##### We can get:
##### $$\int \sin^nxdx=-\frac{\cos x \sin^{n-1}x}{n}+\frac{n-1}n\int\sin^{n-2}xdx\tag 1$$
##### Hence
##### $$\int\sin^4udu-\int\sin^6udu$$$$=\int \sin^4u dx - \frac 5 6 \int \sin^4 u du+\frac {cos u \sin^5 u} 6$$$$=\frac 1 6 \int \sin^4 u du+\frac {\cos u \sin^5 u} 6$$$$=\frac  1 6 (\frac{\cos u\sin^3u}{4}+\frac 3 4\int \sin^2dx)+\frac{\cos u\sin^5 u}{6}$$$$=\frac{\cos u \sin^3 u}{24}+\frac{1}{8}\int\sin^2xdx+\frac{\cos u \sin^5 u}{6}$$$$ =\frac{\cos u \sin^3 u}{24}+\frac{1}{8}\int\frac{1-\cos 2x}{2}dx+\frac{\cos u \sin^5 u}{6}$$
##### $$=\frac 3 8 u-\frac 1 {24}\sin^3 u \cos u -\frac 3 {16}\sin {2u}+\frac 1 6 \sin^5 u \cos u-\frac 5{32}(2u-\sin 2u )$$
##### $$=\frac 1 {16}u-\frac 1 {24}\sin^3 u \cos u+\frac 1 6 \sin^5 u \cos u-\frac 1 {32}\sin 2u$$
##### $$=\frac 1 {16}e^x-\frac 1 {24}\sin^3 e^x \cos e^x+\frac 1 6 \sin^5 e^x \cos e^x-\frac 1 {32}\sin 2e^x+C$$
### 2.
#### (i)
##### We use the substitution:
##### $$u=\tan x, du = \sec^2 xdx$$
##### $$\int \tan^3 x sec^2 x dx=\int u^3du=\frac 1 4 u^4=\frac 14 \tan^4 x+C$$
#### (ii)
##### We use the substitution:
##### $$u=\tan x, du = \sec^2 xdx$$
##### $$\int \tan^4x\sec^2dx=\int u^4 du=\frac 1 5 u^5=\frac 1 5 \tan^5x+C$$
### 3.
#### (i)
##### $$\int \frac{\sin^5 x}{\cos^2 x}dx=\int\frac{\sin^4 x}{\cos ^2x}\sin x dx$$$$=\int \frac{(1-\cos ^2 x )^2}{\cos ^2x}d(-\cos x )=-\frac 1 3 \cos ^3x+2\cos x +\sec x+C$$
#### (ii)
##### Let $u=\sin^4x$, $v'=\frac{1}{\cos^2x}=\sec^2 x$
##### Hence, $u'=4\sin^3x\cos x $, $v=\tan x$
##### $$\int \frac{\sin^4x}{\cos^2x}dx=\sin^4 x \tan x-4\int\sin ^3 x \cos x \tan x dx $$$$=\sin^4x\tan x -4\int\sin^4xdx$$
##### From (1):
##### $$\int \sin^nxdx=-\frac{\cos x \sin^{n-1}x}{n}+\frac{n-1}n\int\sin^{n-2}xdx$$
##### $$\int \sin^4 x dx=-\frac 1 4 \sin^3 x \cos x + \frac 3 8(x-\frac 1 2 \sin 2x )$$
##### Hence$$\int \frac{\sin^4x}{\cos^2x}dx=\sin ^4x\tan x +\sin^3\cos x -\frac 3 2 x+\frac{3}{4}\sin 2x+C$$
### 4.
##### $$\int \frac{x^3+4x^2+10x+8}{x^2+4x+3}dx$$$$=\int x+1+\frac{3x+5}{(x+3)(x+1)}dx$$$$ =\frac {x^2} 2+x+\int\frac{2}{x+3}+\frac{1}{x+1}dx$$$$=\frac {x^2} 2+x+2\ln{(x+3)}+\ln (x+1)+C$$
### 5.
##### $$\int\frac{2x+4}{(x+1)^2(x^2+1)}dx=\int\frac{2}{(x+1)(x^2+1)}$$
##### $$=\int\frac{1}{x+1}dx+\int\frac{1-x}{x^2+1}dx$$$$=\ln|x+1|+\int \frac 1{x^2+1}dx-\int\frac{x}{x^2+1}dx$$$$=\ln|x+1|+\arctan x-\frac{\ln|x^2+1|}{2}+C$$
### 6.
##### We use the substitution $u=e^t+1$, $du=e^tdt$
##### $$\int \frac{e^{2t}}{(e^t+1)^3}dt=\int \frac{u-1}{u^3}du$$$$=\int\frac 1 {u^2}du-\int\frac 1 {u^3}du=-\frac 1 u+\frac {1}{2u^2}=-\frac 1 {e^t+1}+\frac {1}{2(e^x+1)^2}+C$$