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
#define ppinf numeric_limits<int>::max()
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vll p(n+1);
    loop(i,0,n)
        p[i]=i+1;
    ll i=0;
    while(k--){
        //if(i>=n)
        //break;
        swap(p[i],p[i+1]);
        i+=2;
    }
    loop(i,0,n){
        cout<<p[i]<<" ";
    }
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