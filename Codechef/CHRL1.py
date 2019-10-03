# cook your dish here
memo = dict()
def knpsk(c, w, index, k):
    if index in memo.keys():
        if k in memo[index].keys():
            return memo[index][k]
    if k == 0 or index == -1:
        return 0
    if c[index] > k:
        return knpsk(c, w, index-1, k)
    if index not in memo:
        memo[index] = dict()
    memo[index][k] = max(w[index]+knpsk(c, w, index-1, k-c[index]), knpsk(c, w, index-1, k))
    return memo[index][k]
tcase = int(input())
while tcase > 0:
    tcase -= 1
    c, w = [], []
    n, k = map(int, input().split())
    for i in range(n):
        cost, weight = map(int, input().split())
        c.append(cost)
        w.append(weight)
    print(knpsk(c, w, n-1, k))
    # initializing memo for upcoming testcases
    memo = dict()