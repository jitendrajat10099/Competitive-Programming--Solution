# cook your dish here
for i in range(int(input())):
    n,k=map(int,input().split())
    A=list(map(int,input().split()))
    if n%2!=0:
        if k>=n//2+1:
            A[n//2]=0
    div=k//n
    if div%3==2:
        for j in range(n):
            A[j]=A[j]^A[n-1-j]
        for j in range(n):
            A[j]=A[j]^A[n-1-j]
    elif div%3==1:
        for j in range(n):
            A[j]=A[j]^A[n-1-j]
    for j in range(k%n):
        A[j]=A[j]^A[n-1-j]
        
    print(*A)
        