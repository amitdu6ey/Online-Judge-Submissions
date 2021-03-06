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
    ll n,nq;
    cin>>n>>nq;
    deque<ll> q;
    loop(i,0,n){
        ll x;
        cin>>x;
        q.push_back(x);
    }
    ll dp[n][2];
    loop(i,0,n){
        dp[i][0]=q.at(0);
        dp[i][1]=q.at(1);
        if(i>=n-1)    break;
        ll x = q.at(0);
        ll y = q.at(1);
        q.pop_front();
        q.pop_front();
        if(x<y) swap(x,y);
        q.push_front(x);
        q.push_back(y);
    }
    while(nq--){
        ll x;
        cin>>x;
        x--;
        if(x>=n){
            x%=(n-1);
            cout<<dp[n-1][0]<<" "<<q.at(x+1)<<"\n";
        }
        else{
            cout<<dp[x][0]<<" "<<dp[x][1]<<"\n";
        }
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