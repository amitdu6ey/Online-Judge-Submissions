#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin>>n;
	vector<ll> a(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	ll ans;
	if(n%2==0){
		ans=n/2;
	}
	else{
		ans=n/2 + 1;
	}
	cout<<a[ans-1]<<"\n";
	return 0;
}