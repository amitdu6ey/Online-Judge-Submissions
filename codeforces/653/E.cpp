#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,m,k,ne=0;
	cin>>n>>m>>k;
	vector<ll> arr;
	for(ll i=0;i<m;i++){
	    ll a,b;
	    cin>>a>>b;
	    ne++;
	    if(a==1){
	        arr.push_back(b);
	    }
	    else if(b==1){
	        arr.push_back(a);
	    }
	}
	if(k>n-1-arr.size()){
	    cout<<"impossible";
	    return 0;
	}
	else{
	    cout<<"possible";
	    return 0;
	}
	
}