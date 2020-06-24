#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector< vector<ll> > adj;
vector<ll> arr;

void dfs(ll u){
    arr.push_back(u);
    for(ll v : adj[u]){
        dfs(v);
    }
}

int main(){
    ll n,q;
    cin>>n>>q;
    adj.resize(n+1);
    for(ll i=2;i<=n;i++){
        ll p;
        cin>>p; // p is direct superior of i => p->i
        adj[p].push_back(i);    // directional graph
    }
    for(ll i=0;i<q;i++){
        ll u,k;
        cin>>u>>k;
        dfs(u);
        if(k>arr.size()){
            cout<<-1<<"\n";
        }
        else{
            cout<<arr[k-1]<<"\n";
        }
        arr.resize(0);
    }
    return 0;
}