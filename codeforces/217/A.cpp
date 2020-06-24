//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define bug1(x) cout<<"$ "<<x<<" $"<<endl
#define bug2(x) cout<<"% "<<x<<" %"<<endl
#define bug3(x) cout<<"# "<<x<<" #"<<endl
#define ll long long
#define pb push_back
#define mp make_pair
#define tr(z) for(auto it=z.begin(); it!=z.end(); it++)
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

map<pll,pll> parent;

void make_set(pll u){
    parent[u]=u;
}

pll find_set(pll a){
    if(a==parent[a]){
        return a;
    }
    return find_set(parent[a]);
}

void union_sets(pll a, pll b, ll &cnt){
    a = find_set(a);
    b = find_set(b);
    if(a==b)
        return;
    cnt--;
    parent[b]=a;
}

void solve(){
    ll n;
    cin>>n;
    vector< pll > xy(n);
    ll ans = n;
    loop(i,0,n){
        cin>>xy[i].first>>xy[i].second;
        make_set(xy[i]);
    }
    for(auto u : xy){
        for(auto v : xy){
            if(u.first == v.first){
                union_sets(u,v,ans);
            }
            else if(u.second == v.second){
                union_sets(u,v,ans);
            }
        }
    }
    set<pll> s;
    for(auto u : xy){
        s.insert(find_set(u));
    }
    ans = s.size();
    cout<<ans-1<<endl;
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