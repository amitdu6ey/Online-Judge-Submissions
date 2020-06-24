#include<bits/stdc++.h>
using namespace std;

int dist[100009];
vector<bool> vis(100009);
vector<int> adj[100009];

pair<int, int> bfs(int s, int n){
    for(int i=0;i<=n;i++)    vis[i]=false;
    for(int i=0;i<=n;i++)    dist[i]=0;
    vis[s]=true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int a = q.front();
        q.pop();
        for(int b : adj[a]){
            if(vis[b])  continue;
            q.push(b);
            vis[b]=true;
            dist[b]=dist[a]+1;
        }
    }
    int dis=0, id=0;
    for(int i=1;i<=n;i++){
        if(dis<dist[i]){
            dis=dist[i];
            id=i;
        }
    }
    return {id, dis};
}


void solve(){
    int nodes;
    cin>>nodes;
    for(int i=0;i<nodes;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    auto _ = bfs(1,nodes);
    int node1=_.first;
    auto __ = bfs(node1,nodes);
    int dis = __.second;
    cout<<dis<<endl;
    return;
}


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}
