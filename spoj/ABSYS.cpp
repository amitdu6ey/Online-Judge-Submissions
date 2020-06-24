#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    vector<string> s(5);
    for(ll i=0;i<5;i++) cin>>s[i];
    if(s[0].find("machula")!=string::npos){
        ll x = stoi(s[2]);
        ll y = stoi(s[4]);
        cout<<y-x<<" ";
        for(ll i=1;i<5;i++)
            cout<<s[i]<<" ";
        cout<<endl;
    }
    if(s[2].find("machula")!=string::npos){
        ll x = stoi(s[0]);
        ll y = stoi(s[4]);
        cout<<s[0]<<" "<<s[1]<<" "<<y-x<<" ";
        for(ll i=3;i<5;i++)
            cout<<s[i]<<" ";
        cout<<endl;
    }
    if(s[4].find("machula")!=string::npos){
        ll x = stoi(s[0]);
        ll y = stoi(s[2]);
        for(ll i=0;i<4;i++)
            cout<<s[i]<<" ";
        cout<<y+x<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
