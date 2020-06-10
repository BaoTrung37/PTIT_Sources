mod = 1e9 + 7
for _ in range(int(input())):
    n,m = map(int, input().split())
    res = 1
    for i in range(n - m + 1, n + 1):
        res = (res * i) % mod
    print(int(res))

    