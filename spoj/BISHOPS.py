# cook your dish here
from sys import stdin, stdout

n = stdin.readline()
while True:
    n = int(n)
    print(max(1, 2*n - 2))
    n = stdin.readline()
    if n == "":
