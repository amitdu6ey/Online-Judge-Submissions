#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
	ll a,b,c,n;
	cin>>a>>b>>c>>n;
	ll ans;
	if(n>a+b-c){
		ans=n-(a+b-c);
	}
	else{
		ans=-1;
	}
	if(c>a || c>b){
	    ans=-1;
	}
	cout<<ans;
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