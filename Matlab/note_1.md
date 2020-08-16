### 命令行操作
- ... ： 续行符
- cd  : 进去文件夹(是否可以使用全部的cmd命令?/ ls 同样可用)
### MATLAB 的搜索路径
- 变量
- 内部函数
- 程序文件
  - 当前文件夹下的程序文件
  - 文件搜索路径中的程序文件(?)
```matlab
>> clear
>> x=sin(1)

x =

    0.8415

>> sin=[1,2,3,4,5]

sin =

     1     2     3     4     5

>> x=sin(1)

x =

     1
```
#### 设置文件搜索命令
- path
    ```matlab
    >> path(path,'d:\matlab')
    ```
- 对话框(爬)

### MATLAB 数值数据
- int
  - unsigned
    - 8bit : 0~2^8-1 (00000000~11111111)
  - signed
    - 8bit : -2^7~2^7-1 (10000000-01111111)
  - function
    - uint8 
      -  to 8bit unsigned int type
    - int8 
      -  to 8bit signed int type
    ```matlab
    >> clear
    >> x=int8(129)

    x =

        int8

        127

    >> x=uint8(129)

    x =

        uint8

        129
    ```
- float
  - single 
    -  4bit
  - double 
    -  8bit (default)
  - function
    - single()
    - double() 
    ```matlab 
    >> clear
    >> class(4)

    ans =

        'double'

    >> class(single(4))

    ans =

        'single'
    ```
- complex
  - real 
  - imaginary part
  - function
    - real()
    - imag()
- function
  - class() 
    -  get the type of var 
  -  format 命令 设置数值数据的输出格式
     - 不影响数据的计算和存储  
    ```matlab
    >> clear
    >> format long
    >> 50/3

    ans =

        16.666666666666668

    >> format
    >> 50/3

    ans =

        16.6667
    ```
### 数学函数
function(var)
- var规定为矩阵变量，也可以是标量。变量本身就是矩阵的特里。
- 函数在运算时时将函数逐项作用于矩阵的每个元素上，所以最后运算的结果就是一个与var同型的矩阵
```matlab
>> clear
>> A=[1,2;3,4]

A =

     1     2
     3     4

>> B=exp(A)

B =

    2.7183    7.3891
   20.0855   54.5982
```
#### 三角函数
- 单位
    - 角度 函数名后加 d
    - 弧度 
        ```matlab
        >> clear
        >> sin(pi/2)

        ans =

            1

        >> sind(90)

        ans =

            1
        ```
#### abs()
- 实数的绝对值，复数的模，字符串的ASCII码值
```matlab
>> clear
>> abs(-4)

ans =

     4

>> abs(1+i)

ans =

    1.4142

>> abs('a')

ans =

    97
```
#### 取整函数
- fix()
  - 舍去小数取整 
- floor()
  - 向下取整
- ceil()
  - 向上取整 
- round()
    - 四舍五入
```matlab
>> clear
>> a=6.7

a =

    6.7000

>> round(a)

ans =

     7

>> fix(a)

ans =

     6

>> ceil(a)

ans =

     7

>> floor(a)

ans =

     6
```
#### 取余函数
- rem()
```matlab
>> clear
>> m=345

m =

   345

>> m1=rem(m,10)

m1 =

     5

>> m2=rem(fix(m/10),10)

m2 =

     4

>> m3=fix(m/100)

m3 =

     3
```
#### 判断素数
- isprime(n)
- bool(0/1)
```matlab
>> clear
>> a=1:1:100

a =

  列 1 至 14

     1     2     3     4     5     6     7     8     9    10    11    12    13    14

  列 15 至 28

    15    16    17    18    19    20    21    22    23    24    25    26    27    28

  列 29 至 42

    29    30    31    32    33    34    35    36    37    38    39    40    41    42

  列 43 至 56

    43    44    45    46    47    48    49    50    51    52    53    54    55    56

  列 57 至 70

    57    58    59    60    61    62    63    64    65    66    67    68    69    70

  列 71 至 84

    71    72    73    74    75    76    77    78    79    80    81    82    83    84

  列 85 至 98

    85    86    87    88    89    90    91    92    93    94    95    96    97    98

  列 99 至 100

    99   100

>> isprime(a)

ans =

  1×100 logical 数组

  列 1 至 22

   0   1   1   0   1   0   1   0   0   0   1   0   1   0   0   0   1   0   1   0   0   0

  列 23 至 44

   1   0   0   0   0   0   1   0   1   0   0   0   0   0   1   0   0   0   1   0   1   0

  列 45 至 66

   0   0   1   0   0   0   0   0   1   0   0   0   0   0   1   0   1   0   0   0   0   0

  列 67 至 88

   1   0   0   0   1   0   1   0   0   0   0   0   1   0   0   0   1   0   0   0   0   0

  列 89 至 100

   1   0   0   0   0   0   0   0   1   0   0   0
>> k1=find(ans)

k1 =

  列 1 至 14

     2     3     5     7    11    13    17    19    23    29    31    37    41    43

  列 15 至 25

    47    53    59    61    67    71    73    79    83    89    97


>> p=a(k1)

p =

  列 1 至 14

     2     3     5     7    11    13    17    19    23    29    31    37    41    43

  列 15 至 25

    47    53    59    61    67    71    73    79    83    89    97

```
- find() 函数寻找向量中非零元素的序号
  
