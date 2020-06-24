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
vi m1(27);
vi m2(27);

void solve(){
  string g,n,s;
  cin>>g>>n>>s;
  int lg=g.length();
  int ln=n.length();
  int ls=s.length();
  for(int i=0;i<lg;i++){
      m1[g[i]-'A']+=1;
  }
  for(int i=0;i<ln;i++){
      m1[n[i]-'A']+=1;
  }
  for(int i=0;i<ls;i++){
      m2[s[i]-'A']+=1;
  }
  for(int i=0;i<27;i++){
      if(m1[i]!=m2[i]){
          cout<<"NO";
          return;
      }
  }
  cout<<"YES";
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