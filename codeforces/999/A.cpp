#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
	ll n,k;
	cin>>n>>k;
	vector<ll> a(n+1);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	ll front=-1,back=-1;
	for(ll i=1;i<=n;i++){
		if(a[i]>k){
			front=i;
			break;
		}
	}
	for(ll i=n;i>=1;i--){
		if(a[i]>k){
			back=i;
			break;
		}
	}
	ll unsolved = back-front+1;
	ll ans = n - unsolved;
	if(front==-1||back==-1){
		ans=n;
	}
	cout<<ans<<"\n";
	return;
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}