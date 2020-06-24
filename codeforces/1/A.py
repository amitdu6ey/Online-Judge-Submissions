import math
n,m,a = map(int,input().split())
k = n // a
la = m // a
if n % a != 0:
    k = k + 1
if m % a != 0:
    la = la + 1
print(k*la)