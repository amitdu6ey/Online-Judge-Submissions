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

int dist(char a, char b){
    return min({abs(int(a-b)), abs(abs(int(a-'A'))+1+abs(int('Z'-b))),abs(abs(int(b-'A'))+1+abs(int('Z'-a)))});
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string g="ACTG";
    int ans=pinf;
    for(int i=0;i<=n-4;i++){
        string s1=s.substr(i,4);
        int d=0;
        for(int i=0;i<s1.length();i++){
            d+=dist(s1[i],g[i]);
            //cout<<dist(s1[i],g[i])<<endl;
        }
        ans=min(ans,d);
    }
    cout<<ans;
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