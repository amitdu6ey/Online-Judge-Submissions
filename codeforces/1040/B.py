n,k=map(int,input().split())
cook=[]
r=n%(2*k+1)

if r==0:
    cook.append(k+1)
    for i in range(0,int(n/(2*k+1))-1):
        cook.append(cook[-1]+2*k+1)
    print(len(cook))
    for x in cook:
        print(x,end=' ')

if k+1<=r<2*k+1:
    cook.append(k+1)
    for i in range(0,int(n/(2*k+1))):
        cook.append(cook[-1]+2*k+1)
    print(len(cook))
    for x in cook:
        print(x,end=' ')

if 0<r<k+1:
    p=(k+1)-r
    cook.append(k-p+1)
    for i in range(0,int(n/(2*k+1))):
        cook.append(cook[-1]+2*k+1)
    print(len(cook))
    for x in cook:
        print(x,end=' ')