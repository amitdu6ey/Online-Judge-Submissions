#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

ll f(ll n){
	ll fac=0;
	for(ll i=1;i<=n;i++){
		if(n%i==0){
			fac+=1;
			/*if(n==6){
				cout<<"**"<<i<<"**"<<"\n";
			}*/
		}
	}
	if(fac%2==0){
		fac/=2;
	}
	else{
		fac = fac/2 + 1;
	}
	return fac;
}

void solve(){
	ll n;
	cin>>n;
	ll ans=0;
	for(ll i=1;i<=n;i++){
		//cout<<i<<"&&"<<f(i)<<"\n";
		ans += f(i);
	}
	cout<<ans<<"\n";
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
