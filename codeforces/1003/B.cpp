#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
	int a,b,x;
	cin>>a>>b>>x;  // a->0  b->1  
	if(x%2==0){
		if(a>b){
			for(int i=0;i<x/2;i++){
				cout<<"01";
			}
			for(int i=0;i<b-x/2;i++){
				cout<<"1";
			}
			for(int i=0;i<a-x/2;i++){
				cout<<"0";
			}
		}
		if(a<=b){
			for(int i=0;i<x/2;i++){
				cout<<"10";
			}
			for(int i=0;i<a-x/2;i++){
				cout<<"0";
			}
			for(int i=0;i<b-x/2;i++){
				cout<<"1";
			}
		}
	}
	if(x%2!=0){
		if(a>b){
			for(int i=0;i<x/2;i++){
				cout<<"01";
			}
			for(int i=0;i<a-x/2;i++){
				cout<<"0";
			}
			for(int i=0;i<b-x/2;i++){
				cout<<"1";
			}
		}
		if(a<=b){
			for(int i=0;i<x/2;i++){
				cout<<"10";
			}
			for(int i=0;i<b-x/2;i++){
				cout<<"1";
			}
			for(int i=0;i<a-x/2;i++){
				cout<<"0";
			}
		}
	}
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}