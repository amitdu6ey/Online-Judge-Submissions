#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll> p(n);
    for(ll i=0;i<n;i++) cin>>p[i];
    ll x,a;
    cin>>x>>a;
    ll y,b;
    cin>>y>>b;
    ll k;
    cin>>k;
    if(x<y){
        swap(x,y);
        swap(a,b);
    }
    ll cxy=0, cx=0, cy=0;
    for(ll i=1;i<=n;i++){
        if(i%a == 0 and i%b==0) cxy++;
        else if(i%a==0) cx++;
        else if(i%b==0) cy++;
    }
    sort(p.begin(), p.end(), greater<ll>());
    
    ll flen=0, llen=n;
    ll reqLen=-1;
    while(flen<=llen){
        ll len=(llen+flen)/2;
        ll pxy=0, px=0, py=0;
        for(ll i=1;i<=len;i++){
            if(i%x==0 and i%y==0)   pxy++;
            else if(i%x==0) px++;
            else if(i%y==0) py++;
        }
        ll tsum=0;
        for(ll i=0;i<pxy;i++)   tsum+=(x+y)*(p[i])/100;
        for(ll i=pxy;i<px+pxy;i++)   tsum+=(x)*(p[i])/100;
        for(ll i=px+pxy;i<px+py+pxy;i++)   tsum+=(y)*(p[i])/100;
        if(tsum>=k){
            reqLen=len;
            llen=len-1;
        } 
        else{
            flen=len+1;
        }
    }
    cout<<reqLen<<"\n";
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}