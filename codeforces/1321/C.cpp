//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    reverse(alph.begin(), alph.end());
    vector<int> next(n), prev(n);
    for(int i=0;i<n;i++){
        if(i==n-1) prev[i]=i-1, next[i]=-1;
        if(i==0) prev[i]=-1, next[i]=i+1;
        else{
            next[i]=i+1;
            prev[i]=i-1;
        }
    }
    int ans = 0;
    for(char c : alph){
        for(int i=0;i<n;i++){
            if(s[i]!=c) continue;
            if(next[i]==-1 and prev[i]==-1) continue;
            int j = next[i];
            int k = prev[i];
            if( (int)(s[i]-s[j]) == 1 or (int)(s[i]-s[k]) == 1 ){
                if(prev[i]==-1){ // i=0;
                    prev[ next[i] ] = -1;
                }
                else    prev[ next[i] ]=prev[i];
                if(next[i]==-1){ // i=n-1
                    next[ prev[i] ] = -1;
                }
                else next[ prev[i] ] = next[i];
                
                next[i]=-1;
                prev[i]=-1;
                ans++;
                //cout<<s[i]<<endl;
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    solve();
    return 0;
}