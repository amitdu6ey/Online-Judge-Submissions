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

char a[509][509];
ll n,m,k,nf=0;
map< pll, bool > vis;

void bfs(pll s){
    queue< pll > q;
    q.push(s);
    vis[s]=true;
    ll num=1;
    while(!q.empty()){
        if(num>=nf-k){
            return;
        }
        pll v = q.front();
        q.pop();
        ll x,y;
        tie(x,y)=v;
        vector< pll > adj;
        if(x-1>=0 && a[x-1][y]=='.')  adj.pb({x-1,y});
        if(y-1>=0 && a[x][y-1]=='.')  adj.pb({x,y-1});
        if(x+1<n && a[x+1][y]=='.')  adj.pb({x+1,y});
        if(y+1<m && a[x][y+1]=='.')  adj.pb({x,y+1});
        for(auto u : adj){
            tie(x,y)=u;
            if(vis[u])  continue;
            vis[u]=true;
            num++;
            if(num>=nf-k){
                return;
            }
            q.push(u);
        }
    }
}

void solve(){
    cin>>n>>m>>k;
    pll s={0,0};
    loop(i,0,n){
        loop(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='.'){
                s = {i,j};
                nf++;
            }
        }
    }
    bfs(s);
    loop(i,0,n){
        loop(j,0,m){
            if(a[i][j]=='#')    continue;
            if(vis[{i,j}])  continue;
            a[i][j]='X';
        }
    }
    loop(i,0,n){
        loop(j,0,m){
            cout<<a[i][j];
        }
        cout<<endl;
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