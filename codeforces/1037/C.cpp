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
  ll n,count=0;
  string a,b;
  cin>>n>>a>>b;
  loop(i,0,n){
      if(a[i]!=b[i]){
          if(a[i]==b[i]){
              continue;
          }
          else if(a[i+1]==b[i] && a[i]==b[i+1] && i<n-1){
              //swap(a[i],a[i+1]);
              count++;
              i++;
          }
          else{
              count++;
          }
      }
  }
  cout<<count<<"\n";
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