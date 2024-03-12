n = int(input())
v = [int(i) for i in input().split()]
ans = 0
for i in range(v.index(max(v))+1, n):
    if(v[i] % 10 == 5 and v[i+1] < v[i]):
        ans = max(v[i], ans)
if(ans == 0):
    print(0)
else:
    print(sorted(v, reverse=True).index(ans)+1)
