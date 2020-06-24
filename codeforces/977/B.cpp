#include<iostream>
#include<string>
#include<map>
#define ll long long

using namespace std;

map<string,int> dp;

int count(int pos,int len,const string& sub,const string& s){
    int counter=0;
    for(int i=pos;i<len;i++){
        if(sub==s.substr(i,2)){
            counter++;
        }
    }
    return counter;
}

void solve(){
    int n,max=-1;
    string s,sub,max_name;
    cin>>n>>s;
    int len=s.length();
    for(int i=0;i<n-1;i++){
        sub=s.substr(i,2);
        if(dp[sub]==0)
            dp[sub]=count(i,len,sub,s);
    }
    for(auto x : dp){
        if(x.second>max){
            max=x.second;
            max_name=x.first;
        }
    }
    cout<<max_name<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}