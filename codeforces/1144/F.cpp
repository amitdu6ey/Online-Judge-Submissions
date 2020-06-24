#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll, ll>
using namespace std;

vector< vector<ll> > adj;
vector<bool> visited;
vector<bool> color;

bool bfs(ll s){ //check bipartite
    queue<ll> q;
    q.push(s);
    visited[s]=true;
    color[s]=true;
    while(!q.empty()){
        ll a = q.front();
        q.pop();
        for(auto b : adj[a]){
            if(visited[b]){
                if(color[b]==color[a])	return false;
            }
            else{
                color[b]=(!color[a]);
                visited[b]=true;
                q.push(b);
            }
        }
    }
    return true;
}

void solve( ){
    ll n; // vert
    ll in; // edges
    cin>>n>>in;

    adj.resize(n+1);
    visited.resize(n+1);
    color.resize(n+1);
    vector< pll > edges;
    for(ll i=1;i<=in;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
        edges.pb({a,b});
    }

    bool ans = bfs(1);
    if(!ans){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(auto u : edges){
        ll i = u.first;
        if(color[i]){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }

    return;
}

int main(){
    //freopen("input.txt","r",stdin);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}