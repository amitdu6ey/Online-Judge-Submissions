#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector< pair<ll, ll> > edges;

void solve(){
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			if(__gcd(i,j)==1){
			    edges.push_back(make_pair(i,j));
			}
			if(edges.size()==m)	break;
		}
		if(edges.size()==m)	break;
	}
	vector<bool> ok(n+1);
	for(auto u : edges){
	    ok[u.first]=true;
	    ok[u.second]=true;
	}
	for(ll i=1;i<=n;i++){
	    if(ok[i]==false){
	        cout<<"Impossible\n";
	        return;
	    }
	}
	if(edges.size()!=m){
		cout<<"Impossible\n";
		return;
	}
	cout<<"Possible\n";
	for(auto u : edges){
		cout<<u.first<<" "<<u.second<<"\n";
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
}