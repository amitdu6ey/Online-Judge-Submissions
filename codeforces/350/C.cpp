//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define ll long long
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
#define endl "\n"
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if(b.second==0){
        if(a.second==0){
            if(a.first<b.first){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
    else if(a.first < b.first){
        return true;
    }
    else if(a.first == b.first){
        if(a.second < b.second){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

void solve(){
    ll n, ans=0;
    cin>>n;
    vector< pair< ll, ll> > a(n);
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        a[i].first=x;
        a[i].second=y;
        ans+=2;
        if(a[i].first!=0)   ans+=2;
        if(a[i].second!=0)   ans+=2;
    }
    sort(a.begin(),a.end(),cmp);
    cout<<ans<<endl;
    for(ll i=0;i<n;i++){
        ll x = a[i].first;
        ll y = a[i].second;
        if(x!=0){
            if(x>0){
                cout<<1<<" "<<abs(x)<<" "<<"R"<<endl;
            }
            else{
                cout<<1<<" "<<abs(x)<<" "<<"L"<<endl;
            }
        }
        if(y!=0){
            if(y>0){
                cout<<1<<" "<<abs(y)<<" "<<"U"<<endl;
            }
            else{
                cout<<1<<" "<<abs(y)<<" "<<"D"<<endl;
            }
        }
        cout<<2<<endl;
        if(x!=0){
            if(x<0){
                cout<<1<<" "<<abs(x)<<" "<<"R"<<endl;
            }
            else{
                cout<<1<<" "<<abs(x)<<" "<<"L"<<endl;
            }
        }
        if(y!=0){
            if(y<0){
                cout<<1<<" "<<abs(y)<<" "<<"U"<<endl;
            }
            else{
                cout<<1<<" "<<abs(y)<<" "<<"D"<<endl;
            }
        }
        cout<<3<<endl;
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