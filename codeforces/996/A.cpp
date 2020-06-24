#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
	ll n;
	cin>>n;
	ll count=0;
	while(n>0){
		if(n>=100){
			count+=n/100;
			n%=100;
		}
		else if(n>=20){
			count+=n/20;
			n%=20;
		}
		else if(n>=10){
			count+=n/10;
			n%=10;
		}
		else if(n>=5){
			count+=n/5;
			n%=5;
		}
		else if(n>=1){
			count+=n;
			n=0;
		}
	}
	cout<<count<<"\n";
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