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


vll val(10,0);

ll g(ll n){
    ll i=0;
    while(n>0){
        val[i++]=n%10;
        n/=10;
    }
    return i;
}

ll f(ll n){
    ll k = g(n);
    for(ll i=9;i>=0;i--){
        if(val[i]>1){
            loop(j,0,i+1){
                val[j]=1;
            }
            break;
        }
    }
    ll ans=0;
    loop(i,0,10){
        ans+=val[i]*pow(2,i);
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
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
      val.clear();
    }
    return 0;
}