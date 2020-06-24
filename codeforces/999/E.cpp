#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

vector< vector<ll> > adj(5001);
vector< pair<ll, ll> > pq;
vector<bool> visited(5001);

void dfs(ll s){
    if(visited[s]) return;
    visited[s]=true;
    for(ll u : adj[s]){
        if(visited[u]) continue;
        dfs(u);
    }
}

void bfs(ll x, ll n){
	ll nei=0;
	vector<bool> v(n+1, false);
	queue<ll> Q;
	Q.push(x);
	v[x]=true;
	while(!Q.empty()){
		ll s = Q.front();
		Q.pop();
		for(ll u : adj[s]){
			if(visited[u])	continue;
			if(v[u]) continue;
			nei++;
			v[u]=true;
			Q.push(u);
		}
	}
	pq.pb({-nei,x});
}


void solve(){
    ll n,m,s;
	cin>>n>>m>>s;
	for(ll i=0;i<m;i++){
		ll a,b;
		cin>>a>>b;
		adj[a].pb(b);
	}
	dfs(s); // find all cities reachable from s
	
	for(ll i=1;i<=n;i++){
		if(!visited[i])
		    bfs(i,n); // count number of cities reachable from i and push in vector<pair<ll,ll>> pb;
	}
	
	sort(pq.begin(),pq.end());
	
	ll count=0;
	for(auto u : pq){
		ll a = u.second;
		if(!visited[a]){
			dfs(a);
			count++;
		}
	}
	cout<<count<<"\n";
	return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}