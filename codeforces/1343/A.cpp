#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k,x;
    cin>>n;
    ll val = 2;
    while(true){
        val *= 2;
        if(n%(val-1)==0){
            //cout<<val-1<<" ";
            cout<< n/(val-1) <<"\n";
            return;
        }
    }
    return;
}

int main(){
    int tests = 1;
    cin>>tests;
    while(tests--){
        solve();
    }
    return 0;
}