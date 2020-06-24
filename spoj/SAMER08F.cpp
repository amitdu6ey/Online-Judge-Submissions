#include <iostream>
#include<stdio.h>
#define ll long long
#define m 100000007
using namespace std;

int RPF(int n){
    /*int sum=0,i;
    for(i=1;i<=n;i++)
    sum+=i*i;
    return sum;*/
    return n*(n+1)*(2*n+1)/6;
}

int main() {
	int n;
	cin>>n;
	do{
	    cout<<RPF(n)<<"\n";
	    cin>>n;
	}while(n!=0);
	return 0;
