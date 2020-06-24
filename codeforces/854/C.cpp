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
#define pll pair< ll,ll >
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
using namespace std;

void solve(){
    ll k,n,x,ans=0,sum=0;
    priority_queue< pll > q;
    cin>>n>>k;
    vector< pll >   c(n+9);
    vector<ll> arr(n+9);
    loop(i,0,n){
        cin>>x;
        c[i].first=x;
        c[i].second=i;
    }
    loop(i,0,k){
        ans+=c[i].first*(k-i);
        sum+=c[i].first;
        q.push(c[i]);
    }
    ll it=k;
    while(!q.empty()){
        if(it<n){
            q.push(c[it]);
            sum+=c[it].first;
        }
        auto m = q.top();
        sum-=m.first;
        ans+=sum;
        arr[m.second]=it+1;
        q.pop();
        it++;
    }
    cout<<ans<<"\n";
    loop(i,0,n) cout<<arr[i]<<" ";
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