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

vll f(vll a){
    ll len = 0;
    ll n = a.size();
    vll ans(n+1,0);
    loop(i,0,n){
        if(a[i]==1){
            len+=1;
            ans[len]+=1;
        }
        else len=0;
    }
    rloop(i,n,1) ans[i-1]+=ans[i];
    return ans;
}

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vll a(n);
    vll b(m);
    loop(i,0,n) cin>>a[i];
    loop(i,0,m) cin>>b[i];
    vll xs = f(a);
    vll ys = f(b);
    ll ans=0;
    // for(auto x : xs) cout<<x<<" ";
    // cout<<endl;
    // for(auto y : ys) cout<<y<<" ";
    // cout<<endl;
    for(ll i=1;i*i<=k;i++){
        ll j = k/i;
        if(i <= n and j <= m and i*j == k) ans+=xs[i]*ys[j];
        if(i==j) continue;
        if(i <= m and j <= n and i*j == k) ans+=xs[j]*ys[i];
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
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}