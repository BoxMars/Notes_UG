### Var
- 变量是内存单元的抽象
- 区分大小写
#### 赋值语句
- var = num
- num
  - ans = num 

#### 变量管理
- who
- whos

#### 内存变量文件(.mat)
- save
- load

```matlab
>> clear
>> a=1

a =

     1

>> b=2

b =

     2

>> whos
  Name      Size            Bytes  Class     Attributes

  a         1x1                 8  double              
  b         1x1                 8  double              

>> save test a b
>> clear
>> whos
>> load test
>> whos
  Name      Size            Bytes  Class     Attributes

  a         1x1                 8  double              
  b         1x1                 8  double              
```
### 矩阵的表示
```matlab
>> clear
>> A=[1,2,3;4,5,6;7,8,9]

A =

     1     2     3
     4     5     6
     7     8     9

>> B=[9,8,7;,6,5,4;3,2,1]

B =

     9     8     7
     6     5     4
     3     2     1

>> C=[A,B;B,A]

C =

     1     2     3     9     8     7
     4     5     6     6     5     4
     7     8     9     3     2     1
     9     8     7     1     2     3
     6     5     4     4     5     6
     3     2     1     7     8     9

```
#### 向量
- e1:e2:e3
  - e1: 初始值
  - e2: 步长(默认为1)
  - e3:终止值
```matlab
>> clear
>> t=1:1:5

t =

     1     2     3     4     5

```
- linspace(a,b,n)
  - a为向量的第一个元素
  -  b为最后一个元素
  -  n为元素总数(默认为100)

  ```matlab
    >> clear
    >> a=linspace(1,5,3)

    a =

        1     3     5
    ```
#### 结构矩阵
```matlab
>> clear
>> a.x1=10

a = 

  包含以下字段的 struct:

>> a.x2=9

a = 

  包含以下字段的 struct:

    x1: 10
    x2: 9

>> a.x3=8

a = 

  包含以下字段的 struct:

    x1: 10
    x2: 9
    x3: 8

```
#### 单元矩阵
```matlab
>> clear
>> b={1,'A',3.3;1,'A',3.3;1,'A',3.3;}

b =

  3×3 cell 数组

    {[1]}    {'A'}    {[3.3000]}
    {[1]}    {'A'}    {[3.3000]}
    {[1]}    {'A'}    {[3.3000]}

```
### 矩阵元素的引用
- 下标
  - A(3(row),2(column))
  ```matlab
    >> clear
    >> A=[1,2,3;4,5,6]

    A =

         1     2     3
         4     5     6


    >> A(4,5)=100

    A =

         1     2     3     0     0
         4     5     6     0     0
         0     0     0     0     0
         0     0     0     0   100

    ```
- 使用序号来引用
    - MATLAB中矩阵按照列来储存
```matlab
>> clear
>> A=[1,2,3;4,5,6]

A =

     1     2     3
     4     5     6

>> A(4)

ans =

     5

```
- A(i,j)=A((j-1)*m+i)
- 下标与序号的相互转化
  - sub2ind
    - 下标$\rightarrow$序号 
  - ind2sub 
     - 序号$\rightarrow$下标
```matlab
>> clear
>> A=[1:3;4:6]

A =

     1     2     3
     4     5     6

>> d=sub2ind(size(A),[1,2;2,2],[1,2;3,2])

d =

     1     4
     6     4
```
#### 使用冒号表达式获得子矩阵
- A(i,:)
- A(:,j)
- A(i:i+m,j:j+n)

end运算符：表示某一维的末尾元素下边
#### 删除矩阵的元素
- 空矩阵
```matlab
>> clear
>> A=[1:3;4:6;7:9]

A =

     1     2     3
     4     5     6
     7     8     9

>> A(:,2:3)=[]

A =

     1
     4
     7
```
- 改变矩阵的行数
    - reshape(A,m,n)
        > 矩阵总元素数保持不变的情况下重新排列矩阵，元素个数和存储顺序不变
```matlab

>> clear
>> A=[1:3;4:6;7:9]

A =

     1     2     3
     4     5     6
     7     8     9

>> reshape(A,1,9)

ans =

     1     4     7     2     5     8     3     6     9
```
```matlab
>> clear
>> A=[1:3;4:6;7:9]

A =

     1     2     3
     4     5     6
     7     8     9

>> A(:)

ans =

     1
     4
     7
     2
     5
     8
     3
     6
     9
```
### 基本运算
- 基本算术运算
  - \+ \- \*  / (右除) \\(左除) ^  



$$d=0.0120\omega ^2-0.1426\sin \theta+0.6596\upsilon$$


