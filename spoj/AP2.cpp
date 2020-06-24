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
    ll x, y, s;
    cin>>x>>y>>s;
    ll n = (2*s)/(x+y);
    ll d=1;
    if(n==5){
        d=0;
    }
    else{
        d = (y-x)/(n-5);
    }
    ll a = x-2*d;
    cout<<n<<endl;
    for(ll i=0;i<n;i++){
        cout<<a+(i)*d<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cout.tie(0);
    //cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}
