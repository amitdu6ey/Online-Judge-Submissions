//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define ll long long
using namespace std;

list<ll> adj[150009];
vector<ll> p(150009,0);

void init_set(ll n){
    for(ll i=1;i<=n;i++){
        adj[i].push_back(i);
        p[i]=i;
    }
}

ll find_set(ll a){
    if(a==p[a]) return a;
    return find_set(p[a]);
}

void union_set(ll a, ll b){
    a=find_set(a);  //pa
    b=find_set(b);  //pb
    if(a==b)    return;
    adj[a].splice(adj[a].end(),adj[b]);
    p[b]=p[a];
}

void solve(){
    ll n;
    cin>>n;
    init_set(n);
    ll a,b;
    n--;
    while(n--){
        cin>>a>>b;
        union_set(a,b);
    }
    a = find_set(a);
    for(auto u : adj[a]){
        cout<<u<<" ";
    }
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