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

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> ind(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    for(int i=0;i<n;i++){
        ind[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    vector<int> team[2];
    int q=0;
    for(int i=n-1;i>=0;i--){
        int j = ind[b[i]];
        if(a[j]==-1)    continue;
        q=(q+1)%2;  // update team number
        int count=0;
        for(int p=j;count<=k;p++){
            if(p<0||p>=n) break;
            while(p>=0&&p<=n&&a[p]==-1)    p+=(2*k+1);   //optimised after TLE
            if(p<0||p>=n) break;
            team[q].pb(a[p]);
            a[p]=-1;
            count++;
        }
        count=0;
        for(int p=j-1;count<=k-1;p--){
            if(p<0||p>=n) break;
            while(p>=0&&p<=n&&a[p]==-1)    p-=(2*k+1);   //optimised after TLE
            if(p<0||p>=n) break;
            team[q].pb(a[p]);
            a[p]=-1;
            count++;
        }
    }
    int ans[n];
    for(auto u : team[0]){
        int i = ind[u];
        ans[i]=2;
    }
    for(auto u : team[1]){
        int i = ind[u];
        ans[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
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