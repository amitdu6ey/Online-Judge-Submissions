from sys import stdin,stdout
r,c = map(int,stdin.readline().split())
lam=[]
fixd=[]
for i in range(r):
    lam.append(stdin.readline())
h = '0'*c+'\n'
#print(lam)
if h in lam:
    stdout.write('YES')
    exit()
for i in range(c):
    cnt=0
    sp=0
    for j in range(r):
        if lam[j][i]=='1':
            cnt+=1
            sp=j
    if cnt==1:
        fixd.append(sp)
#print(fixd)
if len(fixd)==r:
    stdout.write('NO')
    exit()
for i in range(r):
    if i not in fixd:
        stdout.write('YES')
        exit()