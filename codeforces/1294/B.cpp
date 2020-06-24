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
    vector< pll > a;
    loop(i,0,n){
        ll x,y;
        cin>>x>>y;
        a.pb({x,y});
    }
    sort(a.begin(), a.end());
    loop(i,0,n-1){
        if(a[i].second > a[i+1].second){
            //bug1(i);
            cout<<"NO"<<"\n";
            return;
        }
    }
    int cx=0, cy=0;
    vchar ans;
    loop(i,0,n){
        ll cntr = a[i].first-cx;
        ll cntu = a[i].second-cy;
        loop(j,0,cntr)
            ans.pb('R');
        loop(j,0,cntu)
            ans.pb('U');
        cx=a[i].first;
        cy=a[i].second;
    }
    cout<<"YES"<<"\n";
    for(char c : ans){
        cout<<c;
    }
    cout<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}