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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x=0;
    for(int i=0;i<n;i++){
        x=x^a[i][0];
    }
    int c=0, r=0;
    vector<int> col(n,0);
    if(x!=0){
        cout<<"TAK"<<endl;
        for(auto u : col){
            cout<<u+1<<" ";
        }
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(x==0){
                x^=a[i][j-1];
                x^=a[i][j];
                col[i]=j;
            }
            if(x!=0){
                cout<<"TAK"<<endl;
                for(auto u : col){
                    cout<<u+1<<" ";
                }
                return;
            }
        }
    }
    cout<<"NIE"<<endl;
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