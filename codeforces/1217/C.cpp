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
    string s;
    cin>>s;
    ll n=s.length();
    vll cnt(n, 0);
    ll zeroes=0;
    loop(i,0,n){
        if(s[i]=='1'){
            cnt[i]=zeroes;
            zeroes=0;
        }
        else{
            cnt[i]=0;
            zeroes++;
        }
    }
    ll ans=0;
    //vector<bool> vis(2*1e5 + 9, false);
    loop(i,0,n){
        if(s[i]=='1'){
            loop(j,1,20){
                if(i+j-1>=n)  continue;
                string sub = s.substr(i,j);
                unsigned ll num = bitset<32>(sub).to_ulong();
                if(num - j <= cnt[i]){
                    ans++;
                    //cout<<i<<" : "<<num<<" : "<<j<<" : "<<cnt[i]<<" : "<<sub<<endl;
                }
            }
        }
    }
    cout<<ans<<"\n";
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