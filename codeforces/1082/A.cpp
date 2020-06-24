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
    ll n,x,y,d;
    cin>>n>>x>>y>>d;
    ll z = abs(y-x),w=n-y;
    ll ans=pinf;
    ll flag=0;
    if(z%d==0){
        ans = min(ans,z/d);flag=1;}
    if(w%d==0){
        ll t=(n-x)/d;
        if((n-x)%d!=0)
        t+=1;
        ans=min(w/d+t,ans);flag=1;}
    if((y-1)%d==0){
        ll t=(x-1)/d;
        if((x-1)%d!=0)
        t+=1;
        ans=min(ans,(y-1)/d+t);flag=1;}
    if(flag==1)
    cout<<ans<<"\n";
    else cout<<-1<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}