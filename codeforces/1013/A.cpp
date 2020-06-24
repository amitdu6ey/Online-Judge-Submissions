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
    int n;
    cin>>n;
    vi a(n);
    vi b(n);
    int sum1=0, sum2=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin>>b[i];
        sum2+=b[i];
    }
    if(sum1>=sum2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
  cin>>n;
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