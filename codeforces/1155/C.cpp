//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define ll long long
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> x(n);
    vector<ll> p(m);
    vector<ll> d(n,0);
    for(ll i=0;i<n;i++)
        cin>>x[i];
    for(ll i=0;i<m;i++)
        cin>>p[i];
    for(ll i=1;i<n;i++){
        d[i]=x[i]-x[i-1];
    }
    ll result = d[0];
    for(ll i=1;i<n;i++)
        result = __gcd(d[i], result);
    for(ll i=0;i<m;i++){
        if(result%p[i]==0){
            cout<<"YES"<<endl;
            cout<<x[0]<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}