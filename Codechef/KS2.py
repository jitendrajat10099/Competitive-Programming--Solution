tcase = int(input())
while tcase > 0:
    tcase -= 1
    n = int(input())
    temp = n
    digit_sum = 0
    result = str(n)
    while temp > 0:
        digit_sum += temp % 10
        temp = temp // 10
    if digit_sum % 10 == 0:
        result += '0'
    else:
        i = 1
        while True:
            if (digit_sum+i) % 10 == 0:
                break
            i += 1
        result += str(i)
    print(result)