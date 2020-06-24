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
    string s;
    ll rb,rs,rc;
    ll ps,pb,pc;
    cin>>s;
    ll ns,nb,nc,r;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    rb=count(s.begin(),s.end(),'B');
    rc=count(s.begin(),s.end(),'C');
    rs=count(s.begin(),s.end(),'S');
    ll amt=0, x=0,rt=10000000000090,lt=0,ans=0;
    while(lt<=rt){
        x=(lt+rt)/2;
        amt=pb*max(0ll,rb*x-nb)+ps*max(0ll,rs*x-ns)+pc*max(0ll,rc*x-nc);
        if(amt>r){
            rt=x-1;
        }
        else{
            ans=max(ans,x);
            lt=x+1;
        }
    }
    cout<<ans<<endl;
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