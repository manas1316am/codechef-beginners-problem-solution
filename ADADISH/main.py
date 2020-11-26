t = int(input())
for _ in range(t):
    n = int(input())
    c = list(map(int,input().split()))

    b1, b2 = 0, 0
    c.sort(reverse=True)
    
    for i in range(n):
        if(b1 < b2):
            b1+=c[i]
        else:
            b2+=c[i]
    
    ans = max(b1, b2)
    print(ans)