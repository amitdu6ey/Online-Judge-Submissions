#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<set>
#include<map>
#define ll long long
using namespace std;

int solve(){
	ll n,k,a;
	string ans;
	set<ll> set;
	map<ll, ll> map;
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		cin>>map[i];
		set.insert(map[i]);
	}
	if(set.size()>=k){
		ll counter=1;
		cout<<"YES\n";
		for(auto X : map){
			if(set.find( X.second ) != set.end()){
			    if(counter > k){
			        break;
			    }
			    cout<<X.first + 1<<" ";
			    set.erase(X.second);
			    counter++;
			}
		}
	}
	else{
		cout<<"NO";
	}
	return 0;
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}