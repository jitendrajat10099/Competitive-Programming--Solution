T = int(input())
for _ in range(T):
    n, m = map(int, input().split())
    if n == 1:
        if m == 0:
            print(0)
        elif m == 1:
            print(1)
        else:
            print(-1)
    elif n == 2:
        if m == 1:
            print(1)
        elif 0 < m <= 3:
            print(2)
        else:
            print(-1)
    else:
        range = (n*(n+1))//2
        temp = m-2*n-1
        half = n//2
        if m < n-1 or m > range:
            print(-1)
        elif m-n <= 1:
            print(2)
        elif m <= n*2:
            print(3)
        elif (n % 2 == 1 and (range >= m >= range-half)):
            print(n)
        elif (n % 2 == 0 and (range >= m > range-half)):
            print(n)
        else:
            if n % 2 == 0:
                print(temp//half + 4)
            else:
                if temp % n < half:
                    print(2 * (temp//n)+ 4)
                else:
                    print(2 * (temp//n) + 5)