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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    loop(i,0,n) cin>>a[i];
    sort(a.begin(), a.end());

    set<ll> poss;
    poss.insert(0);
    loop(i,0,n){
        ll x=a[i];
        while(x>0){
            poss.insert(x);
            x/=2;
        }
    }

    ll ans=pinf;
    for(ll val : poss){
        vll tmp;
        loop(i,0,n){
            ll cnt = 0;
            ll x = a[i];
            while(x>val){
                x/=2;
                cnt++;
            }
            if(x==val)
                tmp.pb(cnt);
        }
        sort(tmp.begin(), tmp.end());
        if(tmp.size()<k)    continue;
        ll sum=0;
        loop(j,0,k){
            sum+=tmp[j];
        }
        ans=min(ans, sum);
    }

    cout<<ans<<"\n";
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