#include<bits/stdc++.h>

using namespace std;

int dp[2009][2009];

void solve(){
    string a,b;
    cin>>a>>b;
    int n = a.length();
    int m = b.length();
    memset(dp,0,sizeof(dp[0][0]*(2009)*(2009)));
    for(int i=0;i<n;i++){
        dp[i][0]=i;
        dp[0][i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]})+1;
        }
    }
    cout<<dp[n][m]<<endl;
    return;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        solve();
    }
}
