#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

ll solve(){
	ll n,k=1;
	ll ans=-1;
	cin>>n;
	ll begin=1,end=n;
	while(begin<=end){
		k = (begin+end)/2;
		ll r=n;
		ll vasya=0;
		ll petya=0;
		while(r>0){
			if(r<k){
				vasya+=r;
				break;
			}
			r = r-k;
			r = r - r/10;
			vasya+=k;
			petya+=r/10;
		}
		if(2*vasya >= n){
			if(begin==end){
				ans=k;
				break;
			}
			else{
				end=k;
			}
		}
		else{
			begin=k+1;
		}
	}
	return ans;
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		ll ans=solve();
		cout<<ans;
	}
	return 0;
}