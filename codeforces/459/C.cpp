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

ll dp[1009][1009];

void solve(){
    ll n,k,d;
    cin>>n>>k>>d;
    ll m=1;
    bool possible = false;
    for(ll i=0;i<d;i++){
        m*=k;
        if(m>=n){
            possible=true;
            break;
        }
    }
    if(!possible){
        cout<<-1;
        return;
    }
    for(ll i=0;i<n;i++){
        dp[i][d-1]=i%k;
    }
    for(ll i=1;i<n;i++){
        ll carry = 1;
        for(ll j=d-1;j>=0;j--){
                dp[i][j]=(dp[i-1][j]+carry);
                carry = dp[i][j]/k;
                dp[i][j]%=k;
            }
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<n;j++){
            cout<<dp[j][i]+1<<" ";
        }
        cout<<endl;
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