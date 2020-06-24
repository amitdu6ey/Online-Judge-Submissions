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
    vll a(n);
    loop(i,0,n){
        cin>>a[i];
    }
    map<ll,ll> f;
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
    vll arr1, arr2;
    for(auto u : f){
        if(u.second>2){
            cout<<"NO"<<endl;
            return;
        }
        else if(u.second==1){
            arr1.pb(u.first);
        }
        else if(u.second==2){
            arr1.pb(u.first);
            arr2.pb(u.first);
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<ll>());
    cout<<"YES"<<endl;
    cout<<arr1.size()<<endl;
    for(auto u : arr1){
        cout<<u<<" ";
    }
    cout<<endl;
    cout<<arr2.size()<<endl;
    for(auto u : arr2){
        cout<<u<<" ";
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