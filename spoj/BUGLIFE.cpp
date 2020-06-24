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
 #define rloop(i,a,b) for(long long i=a; i>=b;i--)
 #define loop(i,a,b) for(long long i=a; i<b; i++)
 #define vbool vector< bool >
 #define vvbool  vector< vector<bool> >
 #define vchar vector<char>
 #define vi vector<int>
 #define vvi vector< vector<int> >
 #define pll pair<long long, long long>
 #define vll vector<long long>
 #define vvl vector< vector<long long> >
 #define ninf numeric_limits<long long>::min()
 #define pinf numeric_limits<long long>::max()
 #define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
 using namespace std;

bool isbipartite(ll s, vector<int>* adj, vector<bool>& vis, vector<int>& col){
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        ll v = q.front();
        q.pop();
        vis[v]=true;
        for(auto u : adj[v]){
            if(vis[u]){
                if(col[u]==col[v])  return false;
                else continue;
            }
            q.push(u);
            vis[u]=true;
            col[u]=!col[v];
        }
    }
    return true;
}

 bool solve(){
     ll n,m;
     cin>>n>>m;
     vector<bool> vis(n+9,false);
     vector<int> col(n+9,-1);
     vector<int> adj[n+9];
     for(ll i=0;i<m;i++){
         ll a,b;
         cin>>a>>b;
         adj[a].pb(b);
         adj[b].pb(a);
     }
     for(ll x=1;x<=n;x++){
         if(vis[x]) continue;
         if(!isbipartite(x,adj,vis,col)){
             return false;
         }
     }
 	 return true;
 }

 int main(){
 	 //ios_base::sync_with_stdio(0);
 	 //cout.tie(0);
 	 //cin.tie(0);
 	 //freopen("input.txt","r",stdin);
 	 //freopen("output.txt","w",stdout);
 	 int test_cases=1;
 	 cin>>test_cases;
 	 for(int i=1;i<=test_cases;i++){
         cout<<"Scenario #"<<i<<":"<<endl;
 		 bool isbp = solve();
         if(isbp){
             cout<<"No suspicious bugs found!"<<"\n";
         }
         else{
             cout<<"Suspicious bugs found!"<<"\n";
         }
 	 }
 	 return 0;
 }
