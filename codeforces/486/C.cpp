//  [amitdu6ey]
#include <bits/stdc++.h>
#define hell 1000000009
#define bug(x) cout<<"$ "<<x<<" $"<<endl
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
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()

using namespace std;

void solve(){
    ll n,pos,in,fi,ans{0};
    ll mini=pinf;
    ll maxi=ninf;
    string s;
    cin>>n>>pos;
    cin>>s;
    if(pos>n/2){reverse(s.begin(),s.end()); pos=n-pos+1;}
    pos--;
    bool flag=false;
    loop(i,0,(n/2)+(n%2)){
         if(s[i]!=s[n-i-1]){
             flag=true;
             if(i<mini) mini=i;
             if(i>maxi) maxi=i;
             ans+=min(abs(s[i]-s[n-i-1]),min(abs(s[i]-'a')+abs(s[n-i-1]-'z')+1,abs(s[n-i-1]-'a')+abs(s[i]-'z')+1));
         }
    }
    if(!flag){
        cout<<0;
        return;
    }
    if(pos>=maxi){
        ans+=pos-mini;
    }
    else if(pos<=mini){
        ans+=maxi-pos;
    }
    else{
        ans+=min(pos-mini,maxi-pos)+maxi-mini;
    }
    cout<<ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}