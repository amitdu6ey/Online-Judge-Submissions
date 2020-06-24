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
#define vcll    vector< pair<char, ll> >
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
using namespace std;

void solve(){
    string s;
    cin>>s;
    ll len = s.length();
    vcll c;
    ll k=0;
    loop(i,0,len){
        c.pb( {s[i],0} );
        loop(j,i,len){
            if(s[j]==s[i]){
                //ll k = c.size()-1;
                c[k].second++;
                if(j>=len-1){
                    i=j+1;
                }
            }
            else{
                i=j;
                k++;
                break;
            }
        }
    }
    ll n = c.size();
    loop(i,0,n){
        if(c[i].second>2)   c[i].second=2;
    }
    loop(i,1,n){
        if(c[i].second==2&&c[i-1].second==2){
            c[i].second=1;
        }
    }
    loop(i,0,n){
        loop(j,0,c[i].second){
            cout<<c[i].first;
        }
    }
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