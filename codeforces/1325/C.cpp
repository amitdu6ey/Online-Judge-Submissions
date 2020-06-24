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

void solve(){
    ll n;
    cin>>n;
    vector< pair<ll, ll> > edges;
    vector<ll> degree(n,0);
    loop(i,0,n-1){
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        edges.pb({a,b});
        degree[a]++;
        degree[b]++;
    }
    ll ans = n-1, node = -1;
    loop(i,0,n){
        if(degree[i]>2){
            node = i;
            ans=2;
            break;
        }
    }
    //cout<<ans<<"\n";
    if(ans==n-1){
        loop(i,0,n-1) cout<<i<<"\n";
    }
    else{
        ll cnt1 = 0, cnt2=degree[node];
        for(auto edge : edges){
            ll x,y;
            x = edge.first;
            y = edge.second;
            if(node == x or node == y){
                cout<<cnt1<<endl;
                cnt1++;
            }
            else{
                cout<<cnt2<<endl;
                cnt2++;
            }
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}