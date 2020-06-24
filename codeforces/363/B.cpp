#include<iostream>
#include<vector>
#define ll long long

using namespace std;

void solve(){
    ll n,k,sum=0,min=0,ans=1;
    cin>>n>>k;
    vector<ll> a(n);
    for(vector<ll>::iterator it = a.begin();it != a.end();it++){
        cin>>*it;
    }
    for(vector<ll>::iterator it = a.begin();it != a.begin()+k;it++){
        sum += *it;
    }
    min=sum;
    for(vector<ll>::iterator it = a.begin()+k;it != a.end();it++){
        sum += a.at(it-a.begin());
        sum -= a.at(it-a.begin()-k);
        if(sum<min){
            min=sum;
            ans = it-a.begin()+1-k+1;
           // cout<<ans<<"#"<<sum<<"\n";
        }
    }
    cout<<ans;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}