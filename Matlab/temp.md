```matlab
>> d

d =

    3.0601
    2.8224
    2.9140
    3.1145
    2.7500
    2.5000
    2.7000
    2.9000
    2.1433
    2.5071
    2.3511
    2.1151
    2.0463
    2.2205
    2.2607
    2.7612
    
>> ms   % v

ms =

    3.5274
    1.8621
    2.6462
    3.1365
    2.9679
    2.8494
    2.1502
    2.7316
    2.5561
    2.6107
    2.1280
    1.8698
    2.2014
    2.8480
    3.1219
    2.9667

>> rad %theta

rad =

    1.3783
    1.3192
    1.3192
    1.3205
    1.2807
    1.4195
    0.0242
    1.2308
    1.0548
    1.1391
    1.3799
    1.1474
    1.2257
    1.0815
    1.0998
    1.0959

>> unitrads %omega

unitrads =

    8.6501
    8.6501
   10.5724
    9.5152
    8.6501
   10.5724
    8.6501
   10.5724
    6.7965
    8.6501
   10.5724
    8.6501
    7.3193
    7.3193
    6.7965
    7.9293

>> unitrads=unitrads.^2
>> rad=sin(rad)
>> x=[unitrads,rad,ms]
>> regress(d,x)

ans =

    0.0120
   -0.1426
    0.6596

>> Y=x*ans

Y =

    3.0835
    1.9869
    2.9470
    3.0158
    2.7178
    3.0781
    2.3115
    3.0069
    2.1156
    2.4893
    2.6032
    2.0001
    1.9600
    2.3948
    2.4858
    2.5836
```