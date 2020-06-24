#include<bits/stdc++.h>
#define ll long long

using namespace std;


vector<ll> lookup;


ll compute(ll c, ll len){
    ll sum=0;
    if(lookup.empty()){
        sum += len - c + 1;
    }
    else{
        ll n=lookup.size(); 
        sum += lookup[0]-c+1;
        for(ll i=0;i<n-1;i++){
            if(lookup[i+1]-lookup[i]>=c){
                sum+=(lookup[i+1]-lookup[i])-c+1;
            }
        }
    }
    return sum;
}


void solve(){
    ll n,t,c,temp,i,count=0;
    cin>>n>>t>>c;
    vector<ll> p(n);
    for(i=0;i<n;i++){
        cin>>p[i];
        if(p[i]>t){
            lookup.push_back(i);
        }
    }
    cout<<compute(c,n);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}