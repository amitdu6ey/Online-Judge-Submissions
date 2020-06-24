#include<iostream>
#include<algorithm>
#define ll unsigned long long

using namespace std;


void solve(){
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-2;i++){
        if(a[i]+a[i+1]>a[i+2] && a[i+1]-a[i]<a[i+2] && a[i+2]-a[i+1]<a[i] && a[i+2]-a[i]<a[i+1]){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    return;
}


int main(){
    solve();
    return 0;
}