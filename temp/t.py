import math
def gcd(a,b):
    while b != 0:
        a,b = b, a % b
    return a

def continuous_frac_expan(target,result):
    Q=1<<int(math.ceil(math.log(target)/math.log(2)))*2
    cof=[0 for i in range(5)]
    len=0
    d=0
    target_value=result*1/Q
    tol=1/(2*Q)
    residual=1

    cof[len]=int(target_value)
    len+=1

    residual=1/cof[len-1]

    while math.abs(residual-target_value)>tol:
        residual=target_value
        for i in range(len):
            residual=1/residual-cof[i]
        cof[len]=int(1/residual)
        len+=1
        residual=0
        t_cof=cof.copy()
        t_cof.reverse()
        for i in t_cof:
            residual=1/(i+residual)
    d=cof[len]
    len-=1
    while(len>=0):
        if d==0:
            d=cof[len]
            len-=1
        else:
            d=cof[len]*d+1
            len-=1

    return d

def measure_result_parse(target,max_result):
    r=0
    for i in range(5):
        if (max_result[i]==0):
            max_result[i]=1;
            continue
        max_result[i]=continuous_frac_expan(target,max_result[i])
    r=1
    for i in max_result:
        r*=i/gcd(r,i)
    return r
def period_finding(base,target):
    q=math.ceil(math.log(target)/math.log(2))
    p=2*q
    mac_prob=0

    max_reesult=[0 for i in range(5)]

    prob=[0 for i in range(5)]

    qvm=CPUQVM()
    qvm.init_qvm()
    cqv=qvm.qAllocMany(p)
    tqv=qvm.qAllocMany(q)

    qvecq=qvm.qAllocMany(q)

    qvec2=qvm.qAllocMany(q)

    qvec3=qvm.qAllocMany(2)

    qcProg=QProg()

    for i in range(p):
        qcProg<<H(cqv[i])
    qcProg<<X(tqv[0])
    qcProg<<constModExp(cqv,tqv,base,target,qvec1,qvec2,qvec3)

    qcProg<<QFT(cqv).dagger()
    qvm.directlyRun(qcProg)
    result=quickMeasure(cqv, p * p * p)
    destroyQuantumMachine(qvm)

    max_prob=0

    for i in result:
        max_prob=max(max_prob,i.second)
    for i in result:
        if stoi(i.second,0,2)==0:
            continue
        for i in range(5):
            if prob[i]<max_prob/2 and i.second>max_prob/2:
                max_reesult[i]=stoi(i.first,0,2)
                prob[i]=i.second
                break
    return measure_result_parse(target,max_reesult)






