import math
n,k=map(int,input().split())

r=(n*2)
g=(n*5)
b=(n*8)

print(math.ceil(r/k)+math.ceil(b/k)+math.ceil(g/k))