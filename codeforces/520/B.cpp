#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll,ll> d;
vector<ll> adj;
map<ll,bool> v;
void bfs(ll n, ll m){
	queue<ll> q;
	q.push(n);
	d[n]=0;
	while(!q.empty()){
		ll s = q.front();
		q.pop();
		v[s]=true;
		if(2*s <= 2*m && !v[2*s]) adj.push_back(2*s);
		if(s-1 > 0 && !v[s-1]) adj.push_back(s-1);
		for(int u : adj){
		    if(v[u])    continue;
			d[u]=d[s]+1;
			v[u]=true;
			q.push(u);
			if(u==m){
				return;
			}
		}
		adj.clear();
	}
}


int main(){
	ll n,m;
	cin>>n>>m;
	bfs(n,m);
	/*for(auto u : d){
	    cout<<u.first<<" "<<u.second<<"\n";
	}*/
	cout<<d[m];
	return 0;
}