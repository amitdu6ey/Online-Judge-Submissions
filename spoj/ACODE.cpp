//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(string a){
    ll n = a.length();
    vector<ll> dp(n,0);
    dp[0]=1;
    
    ll num = (a[0]-'0')*10 + (a[1]-'0');
    if(num<=26) dp[1]=2;
    else dp[1]=1;
    
    for(int i=2;i<n;i++){
        ll y = (a[i-1]-'0')*10 + (a[i]-'0');
        if(y<=26){
            dp[i]=dp[i-1]+dp[i-2];
        }
        else{
            dp[i]=dp[i-1];
        }
    }
    cout<<dp[n-1]<<"\n";
    return;
}

int main(){
    while(true){
        string x;
        cin>>x;
        if(x=="0")  break;
        solve(x);
    }
    return 0;
}
