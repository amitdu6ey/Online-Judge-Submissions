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

ll f1(ll x1, ll x2, ll x3, ll x4){
    if(x3>=x2 or x4<=x1){
        return 0;
    }
    return abs(max(x1, x3)-min(x2,x4));
}

ll f2(ll x1, ll x2, ll x3, ll x4, ll x5, ll x6){
    if(f1(x1,x2,x3,x4)==0 or f1(x1,x2,x5,x6)==0 or f1(x3,x4,x5,x6)==0){
        return 0;
    }
    return abs(min({x2,x4,x6})-max({x1,x3,x5}));
}

void solve(){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll x3,y3,x4,y4;
    cin>>x3>>y3>>x4>>y4;
    ll x5,y5,x6,y6;
    cin>>x5>>y5>>x6>>y6;
    ll len1 = f1(x1, x2, x3, x4);
    ll het1 = f1(y1, y2, y3, y4);
    ll len2 = f1(x1, x2, x5, x6);
    ll het2 = f1(y1, y2, y5, y6);
    ll len3 = f2(x1, x2, x3, x4, x5, x6);
    ll het3 = f2(y1, y2, y3, y4, y5, y6);
    ll inter=len1*het1+len2*het2-len3*het3;
    ll warea = (x2-x1)*(y2-y1);
    if(warea>inter){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    //cout<<warea<<" "<<inter<<"\n";
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