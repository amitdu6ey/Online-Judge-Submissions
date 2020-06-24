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

bool isPrime(ll N) {                                                    //determines if the argument is prime or not (deterministic)
    if(N<2)return false;
    if(N<4)return true;
    if((N&1)==0)return false;
    if(N%3==0)return false;
    ll curr=5;
    while (true){
        if(curr>sqrt(N))break;
        if(N%curr==0)return false;
        curr+=2;
        if(curr>sqrt(N))break;
        if(N%curr==0)return false;
        curr+=4;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vll x(n);
    loop(i,0,n) cin>>x[i];
    loop(i,0,n){
        ll y = sqrt(x[i]);
        if(y*y!=x[i]){
            cout<<"NO\n";
        }
        else if(!isPrime(y)){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
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