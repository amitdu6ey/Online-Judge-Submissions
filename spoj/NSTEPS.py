import sys
def main():
    t = int(input(),10)
    while t > 0 :
        a, b = map(int,sys.stdin.readline().split())
        solve(a,b)
        t-=1
def solve(a,b):
    if a==b:
        if a%2 == 0:
            print(2*a)
        else:
            print(2*a - 1)
    elif a == b +2 :
        if b%2 == 0:
            print(b+a)
        else :
            b-=1
            a-=1
            print(b+a+1)
    else :
        print('No Number')
