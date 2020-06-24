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


bool rev(pll a, pll b){
    if(a.first!=b.first)
        return a.first>b.first;
    else return  a.second > b.second;
}

void solve(){
    vector< pll > xy;
    vector< pll > ab;
    ll n;
    cin>>n;
    loop(i,0,n){
        ll x,y;
        cin>>x>>y;
        xy.pb({x,y});
    }
    loop(i,0,n){
        ll a,b;
        cin>>a>>b;
        ab.pb({a,b});
    }
    sort(xy.begin(),xy.end());
    sort(ab.begin(),ab.end(),rev);
    /*loop(i,0,n){
        pll ans = {xy[i].first+ab[i].first, xy[i].second+ab[i].second};
        cout<<ans.first<<" "<<ans.second<<"\n";
    }*/
    pll ans = {xy[0].first+ab[0].first, xy[0].second+ab[0].second};
    cout<<ans.first<<" "<<ans.second<<"\n";
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