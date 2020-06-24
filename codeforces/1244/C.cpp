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

ll gcd(ll a, ll b, ll &x, ll &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    ll x1, y1;
    ll d = gcd(b%a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}


void solve(){
    ll n,p,d,w;
    cin>>n>>p>>w>>d;
    ll x0=1,y0=1,g=1;
    bool possible = find_any_solution(w,d,p,x0,y0,g); //x*w + y*d = p
    if(!possible){
        cout<<-1<<"\n";
        return;
    }
    if(n==w*d-w-d){
        cout<<-1<<"\n";
        return;
    }
    while(y0>=0){
        x0 = x0 + d/g;
        y0 = y0 - w/g;
        if(x0+y0<=n and x0>=0 and y0>=0){
            cout<<x0<<" "<<y0<<" "<<n-x0-y0<<"\n";
            return;
        }
    }
    while(x0>=0){
        y0 = y0 + w/g;
        x0 = x0 - d/g;
        if(x0+y0<=n and x0>=0 and y0>=0){
            cout<<x0<<" "<<y0<<" "<<n-x0-y0<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
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