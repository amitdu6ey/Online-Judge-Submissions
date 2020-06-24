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

int f(int t, int s, int d){
    if(s>=t)    return 0;
    if(abs(t-s)%d==0){
        return abs(t-s)/d;
    }
    else{
        return abs(t-s)/d + 1;
    }
}

void solve(){
    int n,t;
    cin>>n>>t;
    vector<int> s(n);
    vector<int> d(n);
    for(int i=0;i<n;i++){
        cin>>s[i]>>d[i];
    }
    vector<int> a(n);
    int minVal = pinf;
    int mini=0;
    for(int i=0;i<n;i++){
        int x = f(t,s[i],d[i]);
        a[i]=(s[i]+x*d[i])-t;
        if(a[i]<minVal){
            minVal=a[i];
            mini=i;
        }
    }
    cout<<mini+1;
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