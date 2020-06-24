#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

string solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0,j=n-1;i<j;i++,j--){
        bool flag=false;
        vector<int> start;
        vector<int> end;
        if(s[i]=='a')   start.pb(1);
        else if(s[i]=='z')  start.pb(-1);
        else{
            start.pb(-1);
            start.pb(1);
        }
        if(s[j]=='a')   end.pb(1);   
        if(s[j]=='z')   end.pb(-1);
        else{
            end.pb(-1);
            end.pb(1);
        }
        for(int u : start){
            for(int v : end){
                if(s[i]+u == s[j]+v)    flag=true;
            }
        }
        if(flag==false){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<"\n";
    }
    return 0;
}