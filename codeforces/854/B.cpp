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
    ll n,k;
    cin>>n>>k;
    if(n==k||n==1||k==0){
        cout<<0<<" "<<0;
        return;
    }
    if(k>=n/2){
        cout<<1<<" "<<n-k;
        return;
    }
    else{
        if(3*k<=n){
            cout<<1<<" "<<2*k;
        }
        else{
            cout<<1<<" "<<n-k;
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //cin>>test_cases;
    int test_cases=1;
    while(test_cases--){
      solve();
    }
    return 0;
}