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

map< char, pll > dr;

void solve(){
    map< pair< pll, pll >, bool > vis;
    string dirs;
    cin>>dirs;
    ll x = 0;
    ll y = 0;
    ll ans = 0;
    for(char dir : dirs){
        ll dx, dy;
        tie(dx,dy) = dr[dir];
        if(vis[{ {x,y}, {x+dx, y+dy} }] or vis[{ {x+dx, y+dy}, {x,y} }])
            ans += 1;
        else
            ans += 5;
        vis[{ {x,y}, {x+dx, y+dy} }] = vis[{ {x+dx, y+dy}, {x,y} }] = true;
        x += dx;
        y += dy;
    }
    cout<<ans<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    dr['N'] = {0,1};
    dr['S'] = {0,-1};
    dr['E'] = {1,0};
    dr['W'] = {-1,0};
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}