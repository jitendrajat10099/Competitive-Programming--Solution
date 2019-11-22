n,m,g = input().split()
n = int(n)
m = int(m)
g = int(g)
 
t = [int(p) for p in input().split()]
a = [int(p) for p in input().split()]
 
counter = 0
diff = 0
while counter < n-1:
    Diff = t[counter+1] - t[counter]
    if Diff>diff:
        diff = Diff
    counter+=1
print(len([x for x in a if x <= diff]))
