#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

vector<ll> v;

void solve(){
    ll n,k;
    cin>>n>>k;
    v.resize(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end()); // from 0 to k-1 elements are less than or equal to output..
    ll ans,count=0;
    if(k==0){
        ans = v[0]-1;
    }
    else if(k==n){
        ans = v[n-1];
    }
    else{
        ans = v[k-1];
    }
    for( ll i=0;i<n;i++){
        if(v[i]<=ans){
            count++;
        }
    }
    if(count>k || ans < 1 || ans > 1e9){
        ans = -1;
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}