#include<iostream>
#define ll long long

using namespace std;

ll subt(ll n){
    if(n%10 == 0){
        return n/10;
    }
    else{
        return n-1;
    }
}

void solve(){
    ll n,k;
    cin>>n>>k;
    while(k--){
        n=subt(n);
    }
    cout<<n<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}