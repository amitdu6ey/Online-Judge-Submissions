#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string.h>
#define ll long long
using namespace std;

int solve(){
	int n,m[1009],f[1009],sum=0,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>m[i];
	for(i=0;i<n;i++)
	cin>>f[i];
	sort(m, m+n);
	sort(f, f+n);
	for(i=0;i<n;i++)
	sum+=m[i]*f[i];
	cout<<sum<<"\n";
	return 0;
}

int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
