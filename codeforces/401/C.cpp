//  [amitdu6ey]
#include <bits/stdc++.h>
#define bug(x) cout<<"$ "<<x<<" $"<<endl
#define ll long long
#define pb push_back
#define mp make_pair
#define tr(z) for(auto it=z.begin(); it!=t.end(); it++)
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
    ll n,m;
    cin>>n>>m;  // n-0 m-1
    //ll n1,n2,m1,m2,m3;
    vll m1;
    vll n1;
    n1.pb(n);
    n1.pb(n-1);
    m1.pb(m);
    m1.pb(m-1);
    m1.pb(m-2);
    int flag=0;
    for(ll u : n1){
        for(ll v : m1){
            if((v-u)>=0&&(2*u-v)>=0){
                flag=1;
                ll x,y;
                y = v-u;
                x = 2*u - v;
                if(u==n-1)  cout<<"0";
                loop(i,0,x) cout<<"10";
                loop(i,0,y) cout<<"110";
                if(v==m-1)  cout<<"1";
                if(v==m-2)  cout<<"11";
                return;
             }
        }
    }
    if(flag==0){
        cout<<-1;
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