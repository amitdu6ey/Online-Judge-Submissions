//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define ll long long
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

int solve(string a){
    int ans=0;
    int n = a.length();
    stack<char> b;
    for(int i=0;i<n;i++){
        if(b.empty()){
            if(a[i]=='}'){
                a[i]='{';
                b.push('{');
                ans++;
            }
            else{
                b.push(a[i]);
            }
        }
        else{
            char c = b.top();
            if(c=='{'&&a[i]=='}'){
                b.pop();
            }
            else{
                b.push(a[i]);
            }
        }
    }
    ans+=b.size()/2;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    string s;
    int ind=1;
    while(cin>>s){
    if(s[0]=='-'){
        return 0;
    }
      int ans = solve(s);
      cout<<ind++<<". "<<ans<<endl;
    }
    return 0;
}
