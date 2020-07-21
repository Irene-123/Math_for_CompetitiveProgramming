def inv(a,m):
    m0=m
    x0=0
    x1=1
    if m==1:
        return 0
    while a>1:
        q=a//m
        t=m
        m=a%m
        a=t
        t=x0
        x0=x1-q*x0
        x1=t
    if x1<0:
        x1=x1+m0
    return x1            


def findMinX(num,rem,n):
    prod=1
    for i in range (n):
        prod*=num[i]
    result=0
    for i in range (n):
        pp=prod//num[i]
        result+=rem[i]*pp*inv(pp,num[i])
    return result%prod


if __name__=="__main__":
    n=int(input())
    num=list(map(int,input().strip().split()))[:n]
    rem=list(map(int,input().strip().split()))[:n]
    print(findMinX(num,rem,n))
