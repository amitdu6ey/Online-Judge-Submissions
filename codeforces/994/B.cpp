//  [amitdu6ey]
#include <bits/stdc++.h>
#define hell 1000000009
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
#define vpll vector< pair<ll,ll> >
using namespace std;

void solve(){
    priority_queue<ll> q;
    ll n,k,x,iter=0;
    cin>>n>>k;
    vector< pair< ll, pair< ll, ll > > > p(n+9);
    loop(i,0,n+9){
        p[i].first = pinf;
    }
    vll dp(n+9,0);
    loop(i,0,n){
        cin>>x;
        p[i].first = x;
        p[i].second.second=iter++;
    }
    loop(i,0,n){
        cin>>x;
        p[i].second.first = x;
    }

    if(n==1){
        cout<<p[0].second.first;
        return;
    }
    if(k==0){
        loop(i,0,n)
        cout<<p[i].second.first<<" ";
        return;
    }
    sort(p.begin(),p.end());

    loop(i,0,n)
        dp[i]=p[i].second.first;
    loop(i,1,k+1){
        dp[i]+=dp[i-1];
        //  dp[i]+=p[i].second.first;
    }

    loop(i,0,k){  //dp[k]
        q.push(-p[i].second.first);
    }

    loop(i,k+1,n){
        ll minc = -q.top();
        dp[i]+=dp[i-1];
        dp[i]-=p[i-1].second.first;
        if(minc<p[i-1].second.first){
            dp[i]-=minc;
            dp[i]+=p[i-1].second.first;
            q.pop();
            q.push(-p[i-1].second.first);
        }
    }
    vll ans(n+9);
    loop(i,0,n){
        ans[p[i].second.second]=dp[i];
    }
    loop(i,0,n){
        cout<<ans[i]<<" ";
    }
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