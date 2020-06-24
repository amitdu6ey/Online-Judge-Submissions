#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

vector<float> a;

float avg(float n){
	float sum=0;
	for(ll i=0;i<n;i++){
		sum+=a[i];
	}
	sum=sum/n;
	return sum;
}

void solve(){
	float n;
	cin>>n;
	a.resize(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	float ans = avg(n);
	//cout<<"&&"<<ans<<"\n";
	int index=0;
	//ll count=0;
	while(ans<4.5){
		a[index]=5;
		ans=avg(n);
		//cout<<"avg= "<<ans<<"\n";
		index++;
		//count++;
	}
	cout<<index<<"\n";
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