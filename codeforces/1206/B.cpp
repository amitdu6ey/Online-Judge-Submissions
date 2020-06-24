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
    vll a(n);
    loop(i,0,n) cin>>a[i];
    sort(a.begin(), a.end());
    ll ans=0;
    for(ll i=1;i<n;i+=2){
        if(a[i]>0 and a[i-1]>0){
            ans+=(a[i]-1)+(a[i-1]-1);
            //bug1(ans);
        }
        else if(a[i]<0 and a[i-1]<0){
            ans+=(abs(a[i])-1)+(abs(a[i-1])-1);
            //bug1(ans);
        }
        else if(a[i]>0 and a[i-1]<0){
            ans+=(a[i]-1)+(abs(a[i-1])-1)+2;
            //bug1(ans);
        }
        else if(a[i]<0 and a[i-1]>0){
            ans+=(a[i-1]-1)+(abs(a[i])-1)+2;
            //bug1(ans);
        }
        else if(a[i]==0 and a[i-1]!=0){
            ans+=abs(a[i-1])-1+1;
            //bug1(ans);
        }
        else if(a[i-1]==0 and a[i]!=0){
            ans+=abs(a[i])-1+1;
            //bug1(ans);
        }
        else{
            ans+=2;
            //bug1(ans);
        }
    }
    if(n%2!=0){
        if(a[n-1]<0){
            ans+=(abs(a[n-1])-1)+2;
        }
        else{
            ans+=abs(a[n-1]-1);
        }
    }
    cout<<ans<<endl;
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