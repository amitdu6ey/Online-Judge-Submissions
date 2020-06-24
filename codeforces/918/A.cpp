#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#define ll long long
using namespace std;

ll lookup[1009]={0};

ll fib(ll n){
	if(lookup[n]==0){
		if(n<=1)
		lookup[n]=n;
		else
		lookup[n]=fib(n-1)+fib(n-2);
	}
	return lookup[n];
}
int solve(ll n){
	char a[1009];
	ll k=1;
	for(ll i=n;i>=0;i--)
	fib(i);
	//for(int i=1;i<=n;i++)
	//cout<<lookup[i];
	for(ll i=1;i<=n;i++){
		a[i]='o';
	}
	for(ll i=1;i<=n;i=fib(++k)){
			a[i]='O';
	}
	for(ll i=1;i<=n;i++)
	cout<<a[i];
	return 0;
}

int main(){
	ll t=1,n;
	//cin>>t;
	while(t--){
		cin>>n;
		solve(n);
	}
	return 0;
}