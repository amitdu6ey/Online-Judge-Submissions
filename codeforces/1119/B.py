'''
           _                              _    
          | |                            | |   
 ___ _   _| |__   ___ _ __ __ _  ___  ___| | __
/ __| | | | '_ \ / _ \ '__/ _` |/ _ \/ _ \ |/ /
\__ \ |_| | |_) |  __/ | | (_| |  __/  __/   < 
|___/\__, |_.__/ \___|_|  \__, |\___|\___|_|\_\
      __/ |                __/ |               
     |___/                |___/                
'''
def func(l,h):
    l.sort(reverse=True)
    ln = len(l)
    ols,els=0,0
    if ln%2==0:
        for i in range(0,ln,2):
            els+=l[i]
        if els<=h:
            return True
        return False
    else:
        for i in range(0,ln-1,2):
            ols+=l[i]
        ols+=l[-1]
        if ols<=h:
            return True
        return False
        
n,h=map(int,input().split())
arr=list(map(int,input().split()))

for i in range(n-1,-1,-1):
    if func(arr[:(i+1)],h):
        print(i+1)
        break