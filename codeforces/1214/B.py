b=int(input())
g=int(input())
n=int(input())
c=0
for bi in range(0,b+1):
    for gi in range(0,g+1):
        if bi+gi==n:
            c+=1
print(c)