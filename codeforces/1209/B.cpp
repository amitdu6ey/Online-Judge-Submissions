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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi a(n), b(n);
    loop(i,0,n) cin>>a[i]>>b[i];
    bool dp[109];
    ll ans=0;
    loop(i,0,n){
        if(s[i]=='1'){
            dp[i]=true;
            ans++;
        }
        else dp[i]=false;
    }
    //bug2(ans);
    loop(i,1,1e5 + 9){
        ll cnt=0;
        loop(j,0,n)
            if(i>=b[j] and ((i-b[j])%a[j]) == 0)   dp[j]=!dp[j];
        loop(j,0,n) if(dp[j])   cnt++;
        //ans = max(ans, cnt);
        if(ans<cnt){
            ans=cnt;
            //bug1(i);
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