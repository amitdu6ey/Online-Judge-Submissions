#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

map<ll,ll> dp;

ll f(ll n){
    if(n==0||n==1){
        return n;
    }
	else if(dp[n]!=0){
		return dp[n];
	}
	else{
		dp[n]=max(n,f(n/2)+f(n/3)+f(n/4));
		return dp[n];
	}
}

void solve(ll n){
	ll ans = f(n);
	cout<<ans<<"\n";
}

int main(){
	int t=1;
	dp[0]=0;
	dp[1]=1;
	//cin>>t;
	ll n;
	while(cin>>n){
		solve(n);
	}
	return 0;
}
