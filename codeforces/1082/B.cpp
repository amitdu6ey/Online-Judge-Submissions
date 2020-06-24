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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll cnt=0;
    loop(i,0,n){
        if(s[i]=='G'){
            cnt++;
        }
    }
    vll lr(n,0);
    vll rl(n,0);
    loop(i,1,n){
        if(s[i-1]=='G'){
            lr[i]=lr[i-1]+1;
        }
        else{
            lr[i]=0;
        }
    }
    for(ll i=n-2;i>=0;i--){
        if(s[i+1]=='G'){
            rl[i]=rl[i+1]+1;
        }
        else{
            rl[i]=0;
        }
    }
    ll max=0;
    loop(i,0,n){
        if(lr[i]+1>max&&s[i]=='G'){
            max=lr[i]+1;
        }
        else if(lr[i]>max&&s[i]=='S'){
            max=lr[i];
        }
    }
    loop(i,0,n){
        if(rl[i]+lr[i]+1>max&&s[i]=='S'&&cnt>rl[i]+lr[i]){
            max=rl[i]+lr[i]+1;
        }
        else if(rl[i]+lr[i]>max&&s[i]=='S'&&cnt==rl[i]+lr[i]){
            max=rl[i]+lr[i];
        }
    }
    cout<<max<<"\n";
    /*loop(i,0,n){
        cout<<lr[i]<<",";
    }
    cout<<"\n";
    loop(i,0,n){
        cout<<rl[i]<<",";
    }
    cout<<"\n";*/
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