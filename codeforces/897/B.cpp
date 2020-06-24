#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n){
    ll r=0;
    ll l=n;
    ll count1=0, count2=0;
    while(l>0){
        ll m =l%10;
        r = r*10 + m;
        l/=10;
        count1++;
    }
    return r + n*pow(10,count1);
}

int main(){
    ll k,p;
    cin>>k>>p;
    ll sum = 0;
    for(ll i=1;i<=k;i++){
        ll pal=f(i);
        //cout<<pal<<"\n";
        sum = (sum%p + pal%p)%p;
    }
    cout<<sum;
    //cout<<f(12340);
    return 0;
}