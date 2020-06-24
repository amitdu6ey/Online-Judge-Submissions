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
  int i=0;
  string a,b,c;
  c.resize(109);
  cin>>a>>b;
  int n=a.length();
  for(int it=0;it<n;it++){
      if(a[it]==b[it])
        c[it]='0';
    else c[it]='1';
  }
  for(int it=0;it<n;it++)
    cout<<c[it];
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