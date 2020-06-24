#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
    vector<char> v[2];
    for(int i=0;i<2;i++){
        string s;
        cin>>s;
        for(char c : s){
            v[i].pb(c);
        }
    }/*
    for(int i=0;i<2;i++){
        for(char u : v[i]){
            cout<<u;
        }
        cout<<"\n";
    }*/
    int n=v[0].size();
    int count=0;
    for(int i=0;i<n;i++){
        if(i-1>=0&&v[0][i]=='0'&&v[1][i]=='0'&&v[0][i-1]=='0'){
            v[0][i]='y';
            v[0][i-1]='y';
            v[1][i]='y';
            count++;
        }
        if(i-1>=0&&v[0][i]=='0'&&v[1][i]=='0'&&v[1][i-1]=='0'){
            v[0][i]='y';
            v[1][i-1]='y';
            v[1][i]='y';
            count++;
        }
        if(i+1<=n-1 && v[0][i]=='0' && v[1][i]=='0' && v[0][i+1]=='0'){
            v[0][i]='y';
            v[0][i+1]='y';
            v[1][i]='y';
            count++;
        }
        if(i+1<=n-1&&v[0][i]=='0' && v[1][i]=='0' && v[1][i+1]=='0'){
            v[0][i]='y';
            v[1][i+1]='y';
            v[1][i]='y';
            count++;
        }
    }
    cout<<count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}