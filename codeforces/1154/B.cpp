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
    int n;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    if(s.size()>3){
        cout<<-1;
    }
    else if(s.size()==1){
        cout<<0;
    }
    else if(s.size()==2){
        int x[2];
        int i=0;
        for(auto u : s){
            x[i++]=u;
        }
        if((x[1]-x[0])%2!=0)
            cout<<x[1]-x[0];
        else
            cout<<(x[1]-x[0])/2;
        return;
    }
    else if(s.size()==3){
        int x[3];
        int i=0;
        for(auto u : s){
            x[i++]=u;
        }
        if(x[2]-x[1]==x[1]-x[0]){
            cout<<x[2]-x[1];
        }
        else{
            cout<<-1;
        }
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