// Author - Amit Kr. Dubey

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define ll long long
#define pb push_back

using namespace std;

map<ll,bool> isVisited;
vector< vector<ll> > adj;
ll counter= 0;

ll dfs(ll s){
	if(isVisited[s]){
		return 0;
	}
	else{
		isVisited[s]=true;
		counter++;
		for(auto x : adj[s]){
			dfs(x);
		}
	}
	return 0;
}

void solve(){
	ll n,m;
	cin>>n>>m;
	adj.resize(n+1);
	ll a,b;
	for(ll i=0;i<m;i++){
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	dfs(a);
	ll nodes = counter;
	if(m==nodes-1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return;
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
