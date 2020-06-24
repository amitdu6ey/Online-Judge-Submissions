//  [amitdu6ey]
#include <bits/stdc++.h>
#define hell 1000000007
#define bug(x) cout<<"$ "<<x<<" $"<<endl
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
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
using namespace std;

ll n,k,d;

vll dp(109);
vll edp(109);

ll ef(ll a){
    if(a==0) return 1;
    if(a<0) return 0;
    if(edp[a]!=0)   return edp[a];
    else{
        for(int i=1;i<d;i++){
            edp[a]+=ef(a-i);
            edp[a]%=hell;
        }
    }
    return edp[a];
}

ll f(ll a){
    if(a==0) return 1;
    if(a<0) return 0;
    if(dp[a]!=0) return dp[a];
    else{
        for(int i=1;i<=k;i++){
            dp[a]+=f(a-i);
            dp[a]%=hell;
        }
    }
    return dp[a];
}

void solve(){
    cin>>n>>k>>d;
    f(n);
    ef(n);
    ll ans=(dp[n]-edp[n])%hell;
    if(ans<0)   ans+=hell;
    cout<<ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}