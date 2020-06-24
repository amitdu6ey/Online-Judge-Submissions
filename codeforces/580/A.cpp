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
    ll count=0, imax=0;
    for(ll i=0;i<n-1;i++){
        if(a[i+1]>=a[i]){
            count++;
            imax = max(imax, count);
        }
        if(a[i+1]<a[i]){
            count=0;
        }
    }
    cout<<imax+1<<"\n";
    return 0;
}