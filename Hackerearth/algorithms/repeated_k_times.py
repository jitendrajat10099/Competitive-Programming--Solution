x=int(input())
dict ={}
ar=[int(p) for p in input().split()] 
for i in ar:
    if i in dict:
        dict[i]+=1
    else:
        dict[i]=1
x=int(input())   
for i in dict:
    if dict[i]==x:
        print(i)
        break
