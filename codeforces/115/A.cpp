#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> d;
vector<int> p;
vector<vector<int>> adj;
void bfs(int n){
	queue<ll> q;
	q.push(n);
	d[n]=0;
	while(!q.empty()){
		ll s = q.front();
		q.pop();
		for(int u : adj[s]){
		    d[u]=d[s]+1;
			q.push(u);
		}
	}
}


int main(){
	int n;
	cin>>n;
	adj.resize(n+1);
	d.resize(n+1,0);
	p.resize(n+1);
	for(int i=1;i<=n;i++){
	    cin>>p[i];
	    if(p[i]==-1)   continue;
	    adj[p[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
	    if(p[i]==-1){
	        bfs(i);
	    }
	}
	int max=-1;
	for(int i=1;i<=n;i++){
	    //cout<<d[i];
	    if(max < d[i])  max=d[i];
	}
	cout<<max+1;
	return 0;
}