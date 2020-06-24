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
#define ninf numeric_limits<long long>::min()
#define pinf numeric_limits<long long>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vll cost(n);
    loop(i,0,n) cin>>cost[i];
    string s[n][2];
    loop(i,0,n){
        string str;
        cin>>s[i][0];
        s[i][1]=s[i][0];
        reverse(s[i][1].begin(),s[i][1].end());
    }

    ll dp[n][2];
    loop(k,0,2)
        loop(i,0,n)
            dp[i][k]=1e18;

    dp[0][0]=0;
    dp[0][1]=cost[0];

    loop(i,1,n)
        loop(j,0,2)
            loop(k,0,2){
                if(s[i][j]>=s[i-1][k])
                    dp[i][j]=min(dp[i][j],dp[i-1][k]+j*cost[i]);
            }
/*
    loop(i,0,n) cout<<dp[i][0]<<" ";
    cout<<"\n";
    loop(i,0,n) cout<<dp[i][1]<<" ";
    cout<<"\n";
*/
    ll ans = min(dp[n-1][0],dp[n-1][1]);
    if(ans==1e18)   ans=-1;
    cout<<ans<<endl;
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