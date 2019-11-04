def power_calculate(k, n, m):
    result = 1
    while n > 0:
        if (n&1) == 1:
            result = (result*k)%m
        n = n >> 1
        k = (k*k)%m
    return (result*10)%m

tcase = int(input())
m = 1000000007
while tcase > 0:
    tcase -= 1
    k = 2
    n = int(input())
    print(power_calculate(k, n-1, m) % m)