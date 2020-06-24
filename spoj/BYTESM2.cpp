#include<bits/stdc++.h>

using namespace std;

int a[109][109];
int dp[109][109];

void solve(){
    int h,w;
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<w;i++){
        dp[h-1][i]=a[h-1][i];
    }
    for(int i=h-2;i>=0;i--){
        for(int j=0;j<w;j++){
            int max_coins=0;
            for(int k=max(0,j-1);k<=min(w-1,j+1);k++){
                max_coins = max(max_coins,dp[i+1][k]);
            }
            dp[i][j]=a[i][j]+max_coins;
        }
    }
    int ans=0;
    for(int i=0;i<w;i++){
        //cout<<dp[0][i]<<", ";
        ans = max(ans, dp[0][i]);
    }
    cout<<ans<<endl;
    return;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
