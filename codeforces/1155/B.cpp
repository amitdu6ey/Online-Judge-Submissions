//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define ll long long
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            cnt++;
        }
    }
    int x = (n-11)/2;
    if(cnt>x){
        int pos=0;
        for(int i=0;i<n;i++){
            if(s[i]=='8'){
                x--;
                pos=n-i;
            }
            if(x<0){
                break;
            }
        }
        if(pos>=11)
            cout<<"YES";
        else
            cout<<"NO";

    }
    else{
        cout<<"NO";
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