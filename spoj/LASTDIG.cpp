#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll a,b;
    cin>>a>>b;
    a%=10;
    if(b==0){
        cout<<1<<"\n";
        return;
    }
    b%=4;
    if(b==0){
        cout<<(ll)pow(a,4)%10<<"\n";
    }
    else if(b==1){
        cout<<(ll)pow(a,1)%10<<"\n";
    }
    else if(b==2){
        cout<<(ll)pow(a,2)%10<<"\n";
    }
    else{
        cout<<(ll)pow(a,3)%10<<"\n";
    }
    return;
}
int main(){
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}
