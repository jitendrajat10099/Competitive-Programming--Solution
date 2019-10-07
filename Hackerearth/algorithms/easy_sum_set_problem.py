n=int(input())
a=[]
a=list(map(int,input().split()))
m=int(input())
 
c=[]
c=list(map(int,input().split()))
k=100
p=0
u=len(a)
 
b=[]
for i in range(1,100+1):
    p=0
    for j in a:
        
        for k in c:
            if(i+j)==k:
                p+=1
            
    if p==u:
        b.append(i)
        
for i in b:
    print(i,end=" ")
