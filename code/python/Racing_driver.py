def racing():
    a=list(map(int,input().strip().split()))

    n=a[0]
    m=a[1]
    l=list(map(int,input().strip().split()))
    r=list(map(int,input().strip().split()))
    s=list(map(int,input().strip().split()))
    cs=[]
    cs=s[:]

    ans=0
    a=0

    s.sort()
    for i in range(n):
        for j in range(len(s)):
            if l[i]<=cs[j] and cs[j]<=r[i]:
                a=a+1
                cs[j]=-1
                break
        if a>0:
            ans=ans+1
            a=0

    print(ans)

l=int(input())
for i in range(l):
    racing()