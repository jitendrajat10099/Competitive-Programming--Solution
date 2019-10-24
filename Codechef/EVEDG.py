# cook your dish here
for i in range(int(input())):
    n, m = map(int, input().split())
    lis = []
    l = [1] * n
    edg = [0] * n
    for j in range(n):
        lis.append([])
    for j in range(m):
        u, v = map(int, input().split())
        # No of edges of each vertices
        edg[u - 1] += 1
        edg[v - 1] += 1
        lis[u - 1].append(v - 1)
        lis[v - 1].append(u - 1)
    flag = False
    t=-1
    # If no. of edges are even k=1, only one set
    if m % 2 == 0:
        k=1
    # If edges are odd
    else:
        for j in range(n):
            if edg[j]>0:
                    t=j
            if edg[j] % 2 == 1:
                l[j] = 2
                flag = True
                k=2
                break
        if flag == False:
            l[t] = 2
            l[lis[t][0]] = 3
            k=3
    print(k)
    print(*l)
