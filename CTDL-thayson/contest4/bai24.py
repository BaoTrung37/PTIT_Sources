mod = 123456789
def pow2(n,k):
    if k == 1:
        return n
    st = pow2(n,k // 2)
    if k % 2 == 0:
        return st * st % mod
    else:
        return (st * st % mod) * n % mod

t = int(input())
for _ in range(t):
    n = int(input())
    print(pow2(2,n - 1))