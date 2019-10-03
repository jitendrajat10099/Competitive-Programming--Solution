import math

tcase = int(input())
while tcase > 0:
    tcase -= 1
    n = int(input())
    k = list(map(float, input().split()))
    c = list(map(float, input().split()))
    s1, s2 = 0.0, 0.0
    for i in range(n):
        s1 += k[i]*c[i]
        s2 += 1/k[i]
    f = s1*s2
    if f < 0:
        print(-1)
    else:
        print("%.2f"%math.sqrt(f), end=" ")
        for i in range(n):
            xi = s1/(s2*k[i]*k[i])-c[i]
            print("%.2f"%xi, end=" ")
        print()