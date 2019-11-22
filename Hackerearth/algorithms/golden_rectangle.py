x = int(input())
count=0
for i in range(x):
    a,b = input().split()
    a = int(a)
    b = int(b)
    
    if (((a/b)>=1.6) and ((a/b)<=1.7)) or (((b/a)>=1.6) and ((b/a)<=1.7)):
        count+=1
print(count)
    
