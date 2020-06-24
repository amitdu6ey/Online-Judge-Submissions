#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        if(a[i]%2==0){
            a[i]-=1;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}