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
    string s,s1,s2;
    ll a,b;
    cin>>s;
    cin>>a>>b;
    ll n=s.length();
    vll r1(1000009,0);
    vll r2(1000009,0);
    r1[0]=(s[0]-'0')%a;
    loop(i,0,n){
        r1[i+1]=(r1[i]*10 + (s[i+1]-'0'))%a;
    }
    r2[n-1]=(s[n-1]-'0')%b;
    ll p=1;
    for(ll i=n-2;i>=0;i--){
        p=(p*10)%b; // ...
        r2[i]=(((s[i]-'0')%b)*p + r2[i+1])%b;
    }
    loop(i,0,n-1){
        if(r1[i]==0 && r2[i+1]==0 && s[i+1]!='0'){
            s1 = s.substr(0,i+1);
            s2 = s.substr(i+1,n-i-1);
            cout<<"YES\n";
            cout<<s1<<"\n";
            cout<<s2;
            return;
        }
    }
    cout<<"NO\n";
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