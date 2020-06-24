#include <bits/stdc++.h>
#define ll long long

using namespace std;

void f(){
    ll m, n;
    cin>>m>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        if(sum>=m){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"impossible"<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    cin>>test_cases;
    for(ll j=0;j<test_cases;j++){
        cout<<"Scenario #"<<j+1<<":"<<endl;
        f();
        cout<<endl;
    }
    return 0;
}
