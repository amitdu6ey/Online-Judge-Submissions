#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

void solve(){
ll n,m;
cin>>n;
vector<ll> a(n+1);
rep(i,1,n+1){
	cin>>a[i];
}
cin>>m;
vector<ll> b(m+1);
rep(i,1,m+1){
	cin>>b[i];
}
sort(a.begin(), a.end());
sort(b.begin(), b.end());
ll count=0;
ll i=1,j=1;
while(i<=n && j<=m){
    if(a[i]-b[j]<=1 && a[i]-b[j]>=-1){
        count++;
        i++;
        j++;
    }
    else if(a[i]-b[j]>=1){
        j++;
    }
    else if(a[i]-b[j]<=-1){
        i++;
    }
}
cout<<count;
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