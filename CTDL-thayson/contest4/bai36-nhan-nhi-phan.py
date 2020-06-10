# for i in range(int(input())):
#     a=input().split()
#     a1=str(a[0])
#     a2=str(a[1])
#     c=int(a1,2)
#     d=int(a2,2)
#     print(c*d)
for _ in range(int(input())) :
    n,m = (str(i) for i in input().split())
    n = int(n,2)
    m = int(m,2)
    print(n * m)
    