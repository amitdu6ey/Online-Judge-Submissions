#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long c = (3*(n)*(n+1)/2 - n )% 1000007;
    cout<<c<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
