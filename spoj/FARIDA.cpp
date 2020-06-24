#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(vector<ll>& a, ll n, vector<ll>& dp){
    if(n==0)    return 0;
    if(dp[n]!=-1)   return dp[n];
    if(n==1)    dp[1] = a[1];
    else if(n==2)    dp[2] = max(a[1],a[2]);
    else if(n==3)    dp[3] = max(a[1]+a[3],a[2]);
    else dp[n] = max(f(a,n-3,dp) + a[n-1],f(a,n-2,dp) + a[n]);
    return dp[n];
}

ll solve(){
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    vector<ll> dp(n+1,-1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans = f(a,n,dp);
    return ans;
}

int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll ans = solve();
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
