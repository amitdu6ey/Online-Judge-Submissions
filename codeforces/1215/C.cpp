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
    string s1, s2;
    cin>>s1>>s2;
    ll ab=0, ba=0;
    vll vab, vba;
    loop(i,0,n){
        if(s1[i]!=s2[i]){
            if(s1[i]=='a'){
                ab++;
                vab.pb(i+1);
            }
            else{
                ba++;
                vba.pb(i+1);
            }
        }
    }
    ll ans = ab/2 + ba/2;
    ab%=2;
    ba%=2;
    if(ab!=ba){
        cout<<-1<<"\n";
        return;
    }
    else{
        if(ab==1){
            ans+=2;
        }
    }
    n=vab.size();
    ll m=vba.size();
    cout<<ans<<"\n";
    for(ll i=1;i<n;i+=2){
        cout<<vab[i-1]<<" "<<vab[i]<<"\n";
    }
    for(ll i=1;i<m;i+=2){
        cout<<vba[i-1]<<" "<<vba[i]<<"\n";
    }
    if(ab==1){
        cout<<vab[n-1]<<" "<<vab[n-1]<<"\n";
        cout<<vab[n-1]<<" "<<vba[m-1]<<"\n";
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