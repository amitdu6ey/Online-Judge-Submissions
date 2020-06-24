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
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

string s;
ll ans = 0;
vbool vis;

ll count(ll i, ll j, ll n){
    if(i<=-1||j>=n||s[i]!=s[j]||vis[i]||vis[j]){
        return j;
    }
    if(s[i]==s[j]){
        vis[i]=true;
        vis[j]=true;
        ans++;
        return count(i-1,j+1,n);
    }
}

void solve(){
    cin>>s;
    ll n = s.length();
    vis.resize(n);
    ll i=0;
    while(i<n){
        if(s[i]==s[i+1]){
            i=count(i,i+1,n);
        }
        else{
            i++;
        }
    }
    if(ans%2!=0){
        cout<<"Yes";
    }
    else cout<<"No";
    //cout<<ans;
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