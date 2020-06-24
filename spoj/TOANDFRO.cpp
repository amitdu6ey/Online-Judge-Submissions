#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(ll c){
    ll r;
    char a[1090][1090];
    string s;
    cin>>s;
    ll n = s.length();
    r = n/c;
    ll k=0;
    for(ll i=0;i<r;i++){
        if(i%2==0)
        for(ll j=0;j<c;j++){
            a[i][j]=s[k];
            k++;
        }
        else
        for(ll j=c-1;j>=0;j--){
            a[i][j]=s[k];
            k++;
        }
    }
    for(ll i=0;i<c;i++){
        for(ll j=0;j<r;j++){
        cout<<a[j][i];
    }
    }
    cout<<"\n";
}


int main(){
	int t=1;
	ll c;
	//cin>>t;
	while(true){
	    cin>>c;
	    if(c==0){
	        break;
	    }
		solve(c);
	}
	return 0;
}
