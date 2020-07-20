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
    ll a[3][n];
    ll dp[3][n];
    loop(i,0,n){
        cin>>a[0][i]>>a[1][i]>>a[2][i];
    }
    loop(i,0,3)
        loop(j,0,n)
            dp[i][j]=ninf;

    dp[0][0]=a[0][0];
    dp[1][0]=a[1][0];
    dp[2][0]=a[2][0];

    loop(k,1,n){
        loop(i,0,3){
            loop(j,0,3){
                if(i==j)    continue;
                dp[i][k]=max(dp[i][k], dp[i][k-1]+a[j][k]);
            }
        }
    }
    // loop(i,0,n){
    //     loop(j,0,3){
    //         cout<<dp[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<max({dp[0][n-1], dp[1][n-1], dp[2][n-1]})<<"\n";
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
