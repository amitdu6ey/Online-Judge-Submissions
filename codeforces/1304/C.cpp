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

bool cmp(tuple<ll,ll,ll> x, tuple<ll,ll,ll> y){
    ll x1,x2,x3,y1,y2,y3;
    tie(x1, x2, x3) = x;
    tie(y1, y2, y3) = y;
    return x1 < y1;
}

bool solve(){
    ll n,s;
    cin>>n>>s;
    vector< tuple<ll,ll,ll> > customers;
    loop(i,0,n){
        ll t, l, u;
        cin>>t>>l>>u;
        customers.push_back({t,l,u});
    }
    sort(customers.begin(), customers.end(), cmp);
    ll il = s, iu = s, st=0;
    for(auto customer : customers){
        ll t, l, u;
        tie(t,l,u) = customer;
        ll d = t-st;
        ll fl, fu;
        fu = min(u,iu+d);
        fl = max(l, il-d);
        if(fu < l or fl > u){
            return false;
        }
        // updation
        iu = fu;
        il = fl;
        st = t;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll test_cases=1;
    cin>>test_cases;
    while(test_cases--){
        bool possible = solve();
        if(possible) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}