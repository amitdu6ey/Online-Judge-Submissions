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

struct rev{
    bool operator()(const ll& l, const ll& r) const
    {
        return l > r;
    }
};

void solve(){
    ll n,k;
    cin>>n>>k;
    vll a(n,0);
    loop(i,0,n){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vll pos(n,1);
    loop(i,1,n){
        if(s[i]==s[i-1]){
            pos[i]=pos[i-1]+1;
        }
    }
    ll i=0;
    while(i<n){
        ll j = i+1;
        while(pos[j]!=1&&j<n){
            j++;
        }
        sort(a.begin()+i,a.begin()+j,rev());
        i=j;
    }
    ll ans=0;
    loop(i,0,n){
        ans+=a[i];
    }
    loop(i,0,n){
        if(pos[i]>k){
            ans-=a[i];
        }
    }
    /*loop(i,0,n){
        cout<<pos[i]<<" ";
    }*/
    cout<<ans<<endl;
    return;
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cout.tie(0);
    //cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}