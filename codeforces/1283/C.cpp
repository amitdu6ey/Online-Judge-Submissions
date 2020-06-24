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
    vll s(n+1,0);
    vll r(n+1,0);
    loop(i,1,n+1) cin>>s[i];
    loop(i,1,n+1)
        if(s[i]!=0)
            r[s[i]]=i;
    vll us, ur;
    loop(i,1,n+1) if(s[i]==0) us.pb(i);
    loop(i,1,n+1) if(r[i]==0) ur.pb(i);
    ll m=us.size();
    loop(i,0,m)
        s[us[i]]=ur[m-i-1];
    loop(i,0,m){
        if(s[us[i]]==us[i]){
            swap(s[us[i]],s[us[m-1]]);
        }
    }
    loop(i,1,n+1) cout<<s[i]<<" ";
    cout<<"\n";
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