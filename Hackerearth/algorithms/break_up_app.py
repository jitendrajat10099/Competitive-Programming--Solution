n=int(input())
text=[]
count={}
for i in range(n):
    a,b=input().split(":")
    for j in (b.split()):
        if j.isdigit():
            if j in count:
                if a=='G':
                    count[j]+=4
                else:
                    count[j]+=3
            else:
                if a=='G':
                    count[j]=4
                else:
                    count[j]=3
 
z=sorted(count.values())
if len(z)>1:
    if z[-1]!=z[-2]:
        m=list(count.keys())[list(count.values()).index(z[-1])]
        if m=='19' or m=='20':
            print("Date")
        else:
            print("No Date")
elif len(z)==0:
    print("No Date")
