#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

map<char, ll> a;


int main(){
	ll n;
	cin>>n;
	vector<char> s(n);
	for(ll i=0;i<n;i++){
	    cin>>s[i];
	}
	for(ll i=0;i<n;i++){
	    char c = s[i];
		a[c]+=1;
	}
	string ans="No";
	for(auto u : a){
		if(u.second>=2)	ans="Yes";
	}
	if(n==1)    ans="Yes";
	cout<<ans;
	return 0;
}