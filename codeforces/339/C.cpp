//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define ll long long
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

string str;
int m;

bool f(int step, int balance, int lastUsed){
    if( balance<0 or ( balance==0 and lastUsed!=0 ) )
        return 0;
    else if(step>m)  return 1;
    bool ok = false;
    for(int i=1;i<=10;i++){
        if(str[i-1] == '0' or i-balance <= 0 or i == lastUsed) continue;
        ok = ok or f(step+1,i-balance,i);
        if(ok)  break;
    }
    return ok;
}

void trace(int step, int balance, int lastUsed){
    if(balance<0 or (balance==0 and lastUsed!=0) or step > m)
        return;
    for(int i=0;i<=10;i++){
        if(i==lastUsed or str[i-1]=='0' or i-balance <= 0) continue;
        if(f(step+1,i-balance,i)){
            cout<<i<<" ";
            trace(step+1,i-balance,i);
            return;
        }
    }
}

void solve(){
    cin>>str;
    cin>>m;
    bool possible = f(1,0,0);    // f(step,balance,previous number)
    if(possible){
        cout<<"YES"<<endl;
        trace(1,0,0);
    }
    else{
        cout<<"NO"<<endl;
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