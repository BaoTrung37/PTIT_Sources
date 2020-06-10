t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    max_far = a[0]
    maxx = a[0]
    for i in range(1,len(a)):
        maxx = max(a[i],maxx + a[i])
        max_far = max(maxx,max_far)
    print(max_far)    
