t = int(input())
mod = 1e9 + 7
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    res = 0
    for i in range(0,len(a)):
        res = (res + a[i] * i) % mod
    print(int(res))


#code by Bao Trung