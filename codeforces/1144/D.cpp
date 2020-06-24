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

void solve(){
    ll n;
    cin>>n;
    vll a(n);
    loop(i,0,n){
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    map<ll,ll> f;
    for(ll u : a){
        f[u]++;
    }
    ll maxima=ninf;
    ll key;
    for(auto u: f){
        if(u.second>maxima){
            key=u.first;
            maxima=u.second;
        }
    }
    //bug1(key);
    vector< pair<ll, pair<ll,ll> > > ans;
    ll pos = (ll)(find(a.begin(), a.end(), key) - a.begin());
    for(ll i=pos+1;i<n;i++){
        if(a[i]>a[i-1]){
            ans.pb({2, {i+1,i}});
            a[i]=a[i-1];
        }
        if(a[i]<a[i-1]){
            ans.pb({1, {i+1,i}});
            a[i]=a[i-1];
        }
    }
    for(ll i=pos-1;i>=0;i--){
        if(a[i]>a[i+1]){
            ans.pb({2, {i+1,i+2}});
            a[i]=a[i+1];
        }
        if(a[i]<a[i+1]){
            ans.pb({1, {i+1,i+2}});
            a[i]=a[i+1];
        }
    }
    cout<<ans.size()<<endl;
    for(auto u : ans){
        cout<<u.first<<" "<<u.second.first<<" "<<u.second.second<<endl;
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