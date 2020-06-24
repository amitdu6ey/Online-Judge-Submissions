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
    ll n;
    cin>>n;
    vll a(n);
    loop(i,0,n){
        cin>>a[i];
    }
    vll s(n);
    s[0]=a[0];
    loop(i,1,n){
        s[i]=s[i-1]+a[i];
    }
    ll sum = s[n-1];
    if(sum%3 != 0){
        cout<<0<<"\n";
        return;
    }
    sum/=3;
    ll ans1=0,ans2=0;
    vll dp1;
    vll dp2;
    loop(i,0,n-1){
        if(s[i] == sum){
            dp1.pb(i);
        }
        if(s[i] == 2*sum){
            dp2.pb(i);
        }
    }
    ll n1=dp1.size();
    ll n2=dp2.size();
    ll init=0;
    ll ans=0;
    loop(i,0,n1){
        loop(j,init,n2){
            if(dp2[j]>dp1[i]){
                ans+=(n2-j);
                break;
            }
            else{
                init=j;
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
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}