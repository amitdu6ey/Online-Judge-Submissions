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

using namespace std;

void solve(){
  ll  n;
  cin>>n;
  ll m=2*n;
  vll a(m);
  for (ll i = 0; i < m; i++){
      cin>>a[i];
  }
  sort(a.begin(),a.end());
  //cout<<a[0]<<"\n"<<a[n-1]<<"\n"<<a[2*n-1]<<"\n"<<a[n];
  cout<<(a[n-1]-a[0])*(a[m-1]-a[n])<<"\n";
  return;
}

int main(){
  int test_cases=1;
  //cin>>test_cases;
  while(test_cases--){
    solve();
  }
  return 0;
}