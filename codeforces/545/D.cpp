#include<iostream>
#include<algorithm>
#include<queue>
#define ll unsigned long long

using namespace std;


void solve(){
    ll n,count=0,sum=0;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++){
        if(a[i]<sum){
            a[i]=0;
            count++;
        }
        else{
            sum+=a[i];
        }
    }
    cout<<n-count<<"\n";
    return;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}