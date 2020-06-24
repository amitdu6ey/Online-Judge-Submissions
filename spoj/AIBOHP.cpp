#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 6109;
ll dp[N][N] = {};

void LCS(string s1, string s2){
    ll n=s1.length();
    for(ll i=0;i<n;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j] = max({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]+1});
            else
                dp[i][j] = max({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]});
        }
    }
    cout<<n-dp[n][n]<<endl;
    return;
}

void solve(){
    string s1,s2;
    cin>>s1;
    ll n = s1.length();
    s2=s1;
    reverse(s2.begin(), s2.end());
    LCS(s1,s2);
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        memset(dp, 0, sizeof(dp[0][0]) * N * N);
        solve();
    }
    return 0;
