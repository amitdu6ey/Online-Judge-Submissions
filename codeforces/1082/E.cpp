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
using namespace std;

void solve(){
    ll n,c;
    cin>>n>>c;
    vll a(n);
    loop(i,0,n){
        cin>>a[i];
    }
    vll p(n,0);
    if(a[n-1]==c) p[n-1]=1;
    for(ll i=n-2;i>=0;i--){
        if(a[i]==c){
            p[i]=p[i+1]+1;
        }
        else{
            p[i]=p[i+1];
        }
    }
    map<ll,ll> f;
    priority_queue< ll > q;
    vll maxi(n,0);
    loop(i,0,n){
        f[a[i]]++;
        q.push(f[a[i]]);
        maxi[i]=q.top();
    }
    ll max=ninf;
    loop(i,0,n-1){
        //bug(maxi[i]);
        //bug(p[i+1]);
        if(maxi[i]+p[i+1]>max){
            max=maxi[i]+p[i+1];
        }
    }
    if(maxi[n-1]>max){
        max=maxi[n-1];
    }
    cout<<max;
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