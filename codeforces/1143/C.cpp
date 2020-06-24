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

vector<int> adj[100009];
vector<int> r(100009,0);
vector<int> ans;
vector<int> vis(100009,false);

void bfs(int s){
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        if(r[v]==1){    // dont respect ancestors
            int ch=1;
            for(auto u : adj[v]){
                ch*=r[u];  // no child respect him
            }
            if(ch==1){
                ans.pb(v);
            }
        }
        for(auto u : adj[v]){
            if(vis[u])  continue;
            q.push(u);
            vis[u]=true;
        }
    }
}

void solve(){
    int n,s;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a==-1){  // means root
            s=i;
            r[i]=0;
            continue;
        }
        a--;
        adj[a].pb(i);
        r[i]=b;
    }
    if(n==1){
        cout<<-1;
        return;
    }
    bfs(s);
    if(ans.empty()){
        cout<<-1;
    }
    else{
        sort(ans.begin(), ans.end());
        for(auto u : ans){
            cout<<u+1<<" ";
        }
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