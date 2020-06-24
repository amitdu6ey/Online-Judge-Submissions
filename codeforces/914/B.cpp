#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#define ll long long
using namespace std;

void solve(){
	ll n,a[100009],max=0,min=100009,count[100009],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		count[a[i]]++;
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	for(i=max;i>=min;i--){
		if(count[i]%2!=0){
		cout<<"Conan";	
		exit(0);
		}
	}
	cout<<"Agasa";
}

int main(){
	int t=1;
	//cin>>t;
	while(t--)
	solve();
	return 0;
}