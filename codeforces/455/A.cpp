//  [amitdu6ey]
#include <bits/stdc++.h>
#define bug(x) cout<<"$ "<<x<<" $"<<endl
#define ll long long
#define pb push_back
#define mp make_pair
#define tr(z) for(auto it=z.begin(); it!=t.end(); it++)
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

ll n,m=-1;
vll f(100009,0);
vll dp(100009,0);

void solve(){
    cin>>n;
    loop(i,0,n){
        ll x;
        cin>>x;
        f[x]++;
        if(x > m) m=x;
    }
    dp[0]=0;
    dp[1]=f[1];
    loop(i,2,m+1){
        dp[i]=max(dp[i-1],i*f[i]+dp[i-2]);
    }
    cout<<dp[m];
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