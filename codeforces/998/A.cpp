#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector< pair<ll,ll> > a(n);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a[i].first=x;
        a[i].second=i+1;
    }
    if(n==1){
        cout<<"-1";
        return 0;
    }
    if(n==2){
        if(a[0].first==a[1].first){
            cout<<"-1";
            return 0;
        }
    }
    sort(a.begin(), a.end());
    
    cout<<1<<"\n";
    cout<<a[0].second<<" ";
    return 0;
}