#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    string s,t;
    string s1="",s2="";
    cin>>s>>t;
    if(s.find("*")==string::npos){
        if(s.compare(t)==0){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    string g=s;
	if(g.back()=='*'){
	   g.pop_back();
       //cout<<"jaadu\n";
   }
	if(s==t || t==g){
		cout<<"YES"<<endl;
		return;
	}
	ll len = t.length();
    s1 = s.substr(0,s.find('*'));
    s2 = s.substr(s.find('*')+1,s.length()-s1.length());
    string t1 = t.substr(0,s1.length());
    string t2 = t.substr(len-s2.length()-1,s2.length());
    if(t1.compare(s1)==0 && t2.compare(s2)==0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}

int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T=1;
	//cin>>T;
	while(T--){
        solve();
	}
	return 0;
}