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
    ll n, maxv=ninf;
    cin>>n;
    map<string, ll> map1;
    map<string, ll> map2;
    vector< pair<string, ll> > in;
    string ans;
    loop(i,0,n){
        string s;
        ll val;
        cin>>s>>val;
        in.push_back({s,val});
        map1[s]+=val;
    }
    for(auto u : map1){
        if(u.second > maxv){
            maxv=u.second;
        }
    }
    set<string> s;
    for(auto u : map1){
        if(u.second == maxv){
            s.insert(u.first);
        }
    }
    for(auto u : in){
        if(s.find(u.first)!=s.end()){
            map2[u.first]+=u.second;
            if(map2[u.first]>=maxv){
                ans=u.first;
                break;
            }
        }
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