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
    ll n;
    cin>>n;
    vll a(n+1,0);
    vll dp(n+1,0);
    loop(i,1,n+1){
        cin>>a[i];
    }
    loop(i,1,n+1){
        dp[i]=dp[i-1]^a[i];
    }
    /*
    dp[1][n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--){
        dp[1][i]=dp[1][i+1]^a[i];
    }*/
    ll count=0;
    loop(i,1,n+1){
        loop(j,i+1,n+1){
            if((j-i)%2==0)  continue;
            ll mid = (i+j-1)/2;
            ll x = dp[mid]^dp[i-1];
            ll y = dp[mid]^dp[j];
            if(x==y){
                //cout<<i<<" "<<j<<" : ";
                count++;
            }
        }
    }
    cout<<count<<"\n";
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