#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
	ll n;
	cin>>n;
	string s;
	cin>>s;
	vector<ll> d;
	for(ll i=1;i<=n;i++){
		if(n%i==0){
			d.pb(i);
		}
	}
	ll k=d.size();
	for(ll i=1;i<k;i++){ // iter.... n to 1 
	    reverse(s.begin(),s.begin()+d[i]);
	   // cout<<d[i-1]-1<<"*"<<s<<"*"<<d[i]<<"\n";
	}
	cout<<s;
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