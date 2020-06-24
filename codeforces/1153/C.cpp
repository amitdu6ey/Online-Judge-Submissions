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
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

int solve(){
    int n,lp=0,rp=0;
    cin>>n;
    if(n==0){
        cout<<" ";
        return 0;
    }
    vector<char> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i];

    if(n%2!=0||s[0]==')'){
        cout<<":(";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            lp++;
        }
        else if(s[i]==')'){
            rp++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            if(lp<n/2){
                lp++;
                s[i]='(';
            }
            else{
                rp++;
                s[i]=')';
            }
        }
    }
    stack<char> stk;
    int i=1;
    stk.push(s[0]);
    while(!stk.empty()&&i<n){
        if(s[i]!=stk.top()){
            stk.pop();
        }
        else{
            stk.push(s[i]);
        }
        i++;
    }
    if((i!=n)||(!stk.empty())){
        cout<<":(";
    }
    else{
        for(int i=0;i<n;i++)
            cout<<s[i];
    }
    return 0;
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