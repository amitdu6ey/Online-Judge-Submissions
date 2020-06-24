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

bool dfs(ll soldier,ll node, ll dis, vector< vector<ll> >& adj, vector<ll>& vis, vector<ll>& p){
    //if(vis[node]==soldier)  return true;
    /*
        if same soldier had visited that node than it is alright.
    */
    if(vis[node]!=-1&&vis[node]!=soldier){    //  protected by more than 1 soldier
        return false;
    }
    vis[node]=soldier;
    if(dis==0){
        return true;
    }
    for(auto u : adj[node]){
        //if(u==p[node])  continue;   // do not check for parent of node
        p[u]=node;
        bool ans = dfs(soldier, u, dis-1, adj, vis, p);
        if(ans==false){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n,r,m;
    cin>>n>>r>>m;
    vector<ll> p(n,-1); // parent array
    vector<ll> vis(n,-1);   // initialise it as -1 it will contain id of soldier who visited it.
    vector< vector<ll> > adj(n);
    vector < pair<ll,ll> > defence; // {city, strength of soldier}
    loop(i,0,r){
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    loop(i,0,m){
        ll k,s;
        cin>>k>>s;
        k--;
        defence.pb({k,s});
    }

    bool valid = true;
    for(ll i=0;i<m;i++){
        ll city = defence[i].first; // city
        ll dis = defence[i].second; // distance it can protect
        valid = dfs(city,city,dis,adj,vis,p);   // dfs(soldier_id, city, distance, adj, vis, parent)
        if(valid==false){
            cout<<"No"<<endl;
            return;
        }
    }

    for(ll i=0;i<n;i++){    // to check if any city is unprotected
        ll u = vis[i];
        if(u==-1){
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl;
    return;
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cout.tie(0);
    //cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}
