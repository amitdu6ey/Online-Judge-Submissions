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
    string as;
    cin>>as;
    vll a(n), b(n);
    loop(i,0,n) a[i]=(ll)(as[i]-'0');
    loop(i,0,n) b[i]=a[i];

    sort(a.begin(), a.end());

    ll j=0;
    vll vis(n, -1);

    loop(i,0,n){
        if(j>=n) break;
        ll key=a[i];
        auto itr = find(b.begin()+j,b.end(),key);
        if(itr==a.cend())   break;
        j = distance(b.begin(), itr);
        if(j>=n) break;
        vis[j]=1;
        j++;
    }

    vll ans;
    loop(i,0,n){
        if(vis[i]==1)   ans.pb(b[i]);
    }
    loop(i,0,n){
        if(vis[i]==-1)  ans.pb(b[i]);
    }
    loop(i,0,n-1){
        if(ans[i+1]<ans[i]){
            cout<<'-'<<"\n";
            return;
        }
    }
    loop(i,0,n){
        if(vis[i]==1)   cout<<1;
        else cout<<2;
    }
    cout<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}