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
    ll n,m,k;
    cin>>n>>m>>k;
    ll k1=k;
    ll len=n*m/k;
    ll x=1,y=1,mg=1;
    bool flag=false;
    if((n*m)%k){ k1-=1;   flag=true; }
    while(k1>0){
        k1-=1;
        ll i=len;
        cout<<len<<" ";
        while(i--){
            cout<<y<<" "<<x<<" ";
            x+=mg;
            if(x>m) {y++; x=m; mg=-1;}
            if(x<=0) {y++; x=1; mg=1;}
        }
        cout<<"\n";
    }
    if(flag==true){
        ll i=len + (n*m)%(k);
        cout<<i<<" ";
        while(i--){
            cout<<y<<" "<<x<<" ";
            x+=mg;
            if(x>m) {y++; x=m; mg=-1;}
            if(x<=0) {y++; x=1; mg=1;}
        }
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