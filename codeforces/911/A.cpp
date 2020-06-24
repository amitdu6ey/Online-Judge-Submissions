#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long
using namespace std;
int solve(){
	ll n,a[100009],min,j,dis=100009,i,k=0,min_d,d[100009];
	cin>>n;
	cin>>a[0];
	min=a[0];
	j=0;
	for(i=1;i<n;i++){
		cin>>a[i];
		if(a[i]<min){
			min=a[i];
			j=i;
		}
	}
	for(i=j;i<n;i++){
		if(a[i]==min){
			d[k]=i;
			//cout<<d[k]<<" "<<k<<" \n";
			k++;
		}
	}
	min_d=d[k-1]-d[0];
	//cout<<min_d<<"\n";
	for(i=0;i<k-1;i++){
		if(d[i+1]-d[i]<min_d)
		min_d=d[i+1]-d[i];
	}
	cout<<min_d;
	return 0;
}
int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}