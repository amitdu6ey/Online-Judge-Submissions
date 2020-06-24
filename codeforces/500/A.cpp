#include<bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

vector< vector<ll> > adj(30009);
vector<bool> visited(30009,false);

void dfs(ll s, ll t){
	if(visited[s]) 
	    return;
	visited[s]=true;
	for(auto u : adj[s]){
	    if(u > t)
	    break;
		dfs(u,t);
	}
}

void solve(){
	ll n,t;
	cin>>n>>t;
	
	vector<ll> a(n);
	
	for(ll i=1;i<n;i++){
		cin>>a[i];
	}
	
	for(ll i=1;i<=n;i++){
		adj[i].pb(a[i]+i);
	}
	
	dfs(1,t);
	
	bool ans = visited[t];
	if(ans==true){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	solve();
	return 0;
}