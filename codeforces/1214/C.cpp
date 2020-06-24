//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define bug1(x) cout<<"$ "<<x<<" $"<<endl
#define bug2(x) cout<<"% "<<x<<" %"<<endl
#define bug3(x) cout<<"# "<<x<<" #"<<endl
#define ll long long
#define pb push_back
#define mp make_pair
#define tr(z) for(auto it=z.begin(); it!=z.end(); it++)
#define rloop(i,a,b) for(long long i=a; i>=b;i--)
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<long long>::min()
#define pinf numeric_limits<long long>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==0){
        cout<<"Yes"<<endl;
        return;
    }
    if(n%2!=0){
        cout<<"No"<<endl;
        return;
    }
    stack<char> stk;
    stk.push(s[0]);
    loop(i,1,n){
        if(stk.size()==0)   stk.push(s[i]);
        else{
            char x = stk.top();
            if(x=='(' and s[i]==')')    stk.pop();
            else stk.push(s[i]);
        }
    }
    if(stk.size()==0){
        cout<<"Yes"<<endl;
    }
    else if(stk.size()==2){
        char i,j;
        i=stk.top();
        stk.pop();
        j=stk.top();
        stk.pop();
        string ans;
        if(i=='(' and j==')')   ans="Yes";
        else ans="No";
        cout<<ans<<endl;
    }
    else{
        cout<<"No"<<endl;
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