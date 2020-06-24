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
    ll s,b;
    cin>>s>>b;
    vll a(s);
    loop(i,0,s)
        cin>>a[i];
    vector<pll> base(b);
    loop(i,0,b){
        cin>>base[i].first>>base[i].second;
    }
    sort(base.begin(), base.end());
    vll dp(b,0);
    dp[0]=base[0].second;
    loop(i,1,b){
        dp[i]=dp[i-1]+base[i].second;
    }
    loop(i,0,s){
        ll low=0, high=b-1, val=a[i], ans=-1;
        while(high>=low){
            ll mid = low + (high-low)/2;
            if(val>=base[mid].first){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(ans==-1) cout<<0<<" ";
        else cout<<dp[ans]<<" ";
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