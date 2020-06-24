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
    ll n;
    cin>>n;
    vector< pll > a;
    loop(i,0,n){
        ll in;
        cin>>in;
        if(in==-1) continue;
        a.pb({in,i});
    }
    ll m = a.size();
    vll b(n);
    ll ans=0, ans_index=0;
    if(m==0){
        loop(i,0,n) b[i]=1;
        loop(i,1,n){
            if(ans < abs(b[i]-b[i-1])){
                ans = abs(b[i]-b[i-1]);
                ans_index = i;
            }
        }
        // loop(i,0,n) cout<<b[i]<<" ";
        // cout<<endl;
        cout<<ans<<" "<<b[ans_index]<<endl;;
        return;
    }
    loop(i,0,a[0].second) b[i] = a[0].first;
    loop(i,a[m-1].second,n) b[i] = a[m-1].first;

    for(auto x : a){
        b[x.second] = x.first;
    }
    ll pos=1;
    loop(i,1,m){
        ll d = (a[i].first - a[i-1].first)/(a[i].second - a[i-1].second);
        if(a[i].first - a[i-1].first > 0)
            pos=1;
        else
            pos=0;
        if((abs(a[i].first - a[i-1].first))%(a[i].second - a[i-1].second)){
            if(pos) d+=1;
            else d-=1;
        }
        loop(j,a[i-1].second+1,a[i].second){
            if(pos)
                b[j]=min(b[j-1]+d, a[i].first);
            if(!pos)
                b[j]=max(b[j-1]+d, a[i].first);
        }
    }
    loop(i,1,n){
        if(ans < abs(b[i]-b[i-1])){
            ans = abs(b[i]-b[i-1]);
            ans_index = i;
        }
    }
    // loop(i,0,n) cout<<b[i]<<" ";
    // cout<<endl;
    cout<<ans<<" "<<b[ans_index]<<endl;
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