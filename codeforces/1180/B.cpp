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
    ll a[n][2];
    loop(i,0,n) cin>>a[i][0];
    loop(i,0,n) a[i][1] = -a[i][0]-1;
    if(n==1){
        cout<<max(a[0][0],a[0][1])<<"\n";
        return;
    }
    ll dp[n][2];
    dp[0][0]=a[0][0];
    dp[0][1]=a[0][1];
    dp[1][0]=max(a[0][0]*a[1][0], a[0][1]*a[1][0]);
    dp[1][1]=max(a[0][0]*a[1][1], a[0][1]*a[1][1]);
    loop(i,2,n){
        dp[i][0] = max(dp[i-2][0], dp[i-2][1])*max(a[i-1][0]*a[i][0], a[i-1][1]*a[i][0]);
        dp[i][1] = max(dp[i-2][0], dp[i-2][1])*max(a[i-1][0]*a[i][1], a[i-1][1]*a[i][1]);
    }
    /*
    loop(i,0,n){
        cout<<dp[i][0]<<" ";
    }
    cout<<"\n";
    loop(i,0,n){
        cout<<dp[i][1]<<" ";
    }
    cout<<"\n";
    cout<<max(dp[n-1][0],dp[n-1][1])<<"\n";
    */
    ll x=n;
    stack<ll> ans;
    while(x>=2){
        if(dp[x-1][0]>dp[x-1][1]){
            ans.push(a[x-1][0]);
            if(a[x-1][0]*a[x-2][0] > a[x-1][0]*a[x-2][1]){
                ans.push(a[x-2][0]);
            }
            else{
                ans.push(a[x-2][1]);
            }
        }
        else{
            ans.push(a[x-1][1]);
            if(a[x-1][1]*a[x-2][0] > a[x-1][1]*a[x-2][1]){
                ans.push(a[x-2][0]);
            }
            else{
                ans.push(a[x-2][1]);
            }
        }
        x-=2;
    }
    if(x==1){
        ans.push(max(a[0][0], a[0][1]));
    }
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
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