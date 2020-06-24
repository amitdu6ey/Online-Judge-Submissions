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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vll even, odd;
    for(ll i=n-1;i>=0;i--){
        if(a[i]%2==0){
            even.pb(a[i]);
        }
        else{
            odd.pb(a[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll t = min(even.size(), odd.size());
    even.resize(even.size()-t);
    odd.resize(odd.size()-t);
    if(even.size()!=0){
        even.resize(even.size()-1);
    }
    if(odd.size()!=0){
        odd.resize(odd.size()-1);
    }
    ll ans=0;
    for(ll u : even){
        ans+=u;
    }
    for(ll u : odd){
        ans+=u;
    }
    cout<<ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}