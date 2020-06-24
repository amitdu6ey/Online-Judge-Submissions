# your code goes here
def main():
	t=int(input(),10)
	while t > 0 :
		a = int(input(),10)
		fact(a)
		t-=1
def fact(a) :
    b=1
    while a > 0 :
        b*=a;
        a-=1
    print(b)
