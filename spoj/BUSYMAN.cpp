#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

void solve(){
    vector<pair<ll,ll>> arr;
    ll N,a,b;
    cin>>N;
    for(ll i=0;i<N;i++){
        cin>>a>>b;
        arr.push_back(make_pair(b,a));
    }
    sort(arr.begin(),arr.end());
    ll count=1,prev=arr[0].first; 
    for(ll i=1;i<N;i++){
        if(arr[i].second >= prev){
            count+=1;
            prev=arr[i].first;
        }
    }
    cout<<count<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
