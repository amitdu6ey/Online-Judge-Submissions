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
#define rloop(i,a,b) for(long long i=a; i>=b;i--)
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<long long>::min()
#define pinf numeric_limits<long long>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

void solve(){
    stack<ll> s;
    ll n;
    cin>>n;
    vll a(n);
    loop(i,0,n) cin>>a[i];
    bool tip;
    vector< pair<ll,ll> > ans;
    // tip -> true (top is positive)
    for(auto tip : {false, true}){
        loop(i,0,n){
            if((a[i]<0) and tip){
                s.push(a[i]);
                tip = !tip;
            }
            else if( (a[i]>0) and !tip){
                s.push(a[i]);
                tip = !tip;
            }
            else if( (a[i]<0) and !tip){
                if(!s.empty() and a[i] > s.top()){
                    s.pop();
                    s.push(a[i]);
                }
            }
            else if( (a[i]>0) and tip){
                if(!s.empty() and a[i] > s.top()){
                    s.pop();
                    s.push(a[i]);
                }
            }
        }
        if(s.size() == 0) continue;
        ll sum=0, len = s.size();
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        ans.pb({len, sum});
    }
    sort(ans.begin(), ans.end());
    ll id = ans.size()-1;
    cout<<ans[id].second<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}