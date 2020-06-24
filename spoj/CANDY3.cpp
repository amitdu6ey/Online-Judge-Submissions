#include<iostream>

#define ll unsigned long long

using namespace std;

void solve(ll n){
	ll a=0, sum=0;
	for(ll i=0;i<n;i++){
		cin>>a;
		sum=(sum+a)%n;
	}
	if(sum == 0){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return;
}


int main(){
	ll t=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		solve(n);
	}
	return 0;
}
