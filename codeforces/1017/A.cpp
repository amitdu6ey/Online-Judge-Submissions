#include<bits/stdc++.h>
#define  ll long long

using namespace std;

int main(){
	int n;
	cin>>n;
	vector< pair<int, int> > v;
	for(int i=1;i<=n;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		v.push_back(make_pair(-(a+b+c+d),i));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i].second == 1){
			cout<<i+1<<"\n";
		}
	}
	return 0;
}