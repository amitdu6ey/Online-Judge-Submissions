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

void solve(){
    ll n;
    cin>>n;
    string a;
    cin>>a;
    if(n>2){
        cout<<"YES\n";
        cout<<2<<"\n";
        cout<<a[0]<<" ";
        loop(i,1,n){
            cout<<a[i];
        }
        cout<<"\n";
    }
    else{
        if(n==2){
            if((int)(a[0]-'0')<(int)(a[1]-'0')){
                cout<<"YES\n";
                cout<<2<<"\n";
                cout<<a[0]<<" "<<a[1]<<"\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return;
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cout.tie(0);
    //cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}