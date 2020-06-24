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
  ll n,s,mi,l=0,ans=0;
  cin>>n>>s;
  vll a(n);
  loop(i,0,n)   cin>>a[i];
  sort(a.begin(),a.end());
  mi=n/2;
  if(a[mi]==s){
      ans=0;
  }
  else if(a[mi]<s){
      for(ll i=mi;i<n;i++){
          if(a[i]>=s)    break;
          l=i;
      }
      for(ll i=mi;i<=l;i++){
          ans+=abs(s-a[i]);
      }
  }
  else if(a[mi]>s){
      for(ll i=mi;i>=0;i--){
          if(a[i]<=s)    break;
          l=i;
      }
      for(ll i=l;i<=mi;i++){
          ans+=abs(a[i]-s);
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