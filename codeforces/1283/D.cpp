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

ll n,m;
vll a;

bool ispossible(ll d){
    ll cnt=0;
    loop(i,0,n-1){
        ll nbt = a[i+1]-a[i]-1;
        cnt+=min(nbt, 2*d);
    }
    cnt+=2*d;
    if(cnt>=m)  return true;
    else return false;
}


void solve(){
    cin>>n>>m;
    a.resize(n);
    loop(i,0,n) cin>>a[i];
    sort(a.begin(), a.end());
    ll l=1, r=4*1e9, d=-1;
    ll mid=(l+r)/2;

    while(l<=r){
        mid=(l+r)/2;
        if(ispossible(mid)){
            d=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    //cout<<d;
    ll ans=0;
    map<ll,bool> vis;
    vll v;
    ll cnt=0;
    loop(i,0,n) vis[a[i]]=true;

    loop(D,1,d+1){
        if(cnt>=m)  break;
        loop(i,0,n){
            if(!vis[a[i]-D]){
                if(cnt>=m)  break;
                v.pb(a[i]-D);
                vis[a[i]-D]=true;
                ans+=D;
                cnt++;
            }
            if(!vis[a[i]+D]){
                if(cnt>=m)  break;
                v.pb(a[i]+D);
                vis[a[i]+D]=true;
                ans+=D;
                cnt++;
            }
        }
    }
    cout<<ans<<"\n";
    loop(i,0,m){
        cout<<v[i]<<" ";
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