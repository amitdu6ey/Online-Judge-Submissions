#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

ll n,m,x,y,ans=0;
vector<ll> a;
vector< vector<ll> > adj;
vector<bool> visited;
vector<ll> cats;

bool isleaf(ll e){
	if(adj[e].size()==1) return true;
	return false;
}

void bfs(ll s){
	queue<ll> q;
	q.push(s);
	visited[s]=true;
	cats[s]=a[s];
	while(!q.empty()){
		ll v = q.front();
		q.pop();
		for(auto u : adj[v]){
			if(visited[u])	continue;
            visited[u]=true;
			if(a[v]==1&&a[u]==1)	cats[u]=cats[v]+1;
			if(cats[u]>m)	continue;
			if(isleaf(u)){
                ans++;
                continue;
            }
			q.push(u);
		}
	}
}

int main(){
	cin>>n>>m;
	a.resize(n+1);
	adj.resize(n);
	visited.resize(n+1);
	cats.resize(n+1);
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		x--;
		y--;
		adj[x].pb(y);
		adj[y].pb(x);
	}
    for(ll i=0;i<n;i++){
        cats[i]=a[i];
    }
	bfs(0);
	cout<<ans;
	return 0;
}