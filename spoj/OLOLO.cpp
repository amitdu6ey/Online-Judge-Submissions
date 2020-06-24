#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
void solve(){
    ll n;
    cin>>n;
    ll x = 0;
    for(ll i=0;i<n;i++){
        ll y;
        cin>>y;
        x=y^x;
    }
    cout<<x;
    return;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
