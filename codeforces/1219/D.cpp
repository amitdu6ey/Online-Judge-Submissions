#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define l1 long
#define ld long double
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(x) cout<<"$ "<<x<<" $"<<endl
#define bug(x) cout<<"& "<<x<<" &"<<endl
#define all(g) g.begin(),g.end()
#define lop1(i,j,n) for(int i=j; i<n; i++)
#define lop2(i,j,n) for(int i=j; i<=n; i++)
#define lop3(i,n,j) for(int i=n; i>j; i--)
#define lop4(i,n,j) for(int i=n; i>=j; i--)
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define fi first
#define se second
const int N=1e5+3;
//int p[N];
//int find(int k){ return p[k]==k ? k:p[k]=find(p[k]); }
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    fast
    ll n, k, a;
    cin>>n>>k;
    ll we[n], co[n];
    lop1(i,0,n) cin>>we[i];
    cin>>a;
    lop1(i,0,n) cin>>co[i];
    lop1(i,0,n-1)
    {
        if(we[i+1]-we[i]>a)
        {
            cout<<-1;
            return 0;
        }
    }
    ll ans=0;
    lop1(i,0,n)
    {
        if(we[i]>k)
        {
            ans+=co[i];
            k+=a;
        }
    }
    cout<<ans;
    return 0;
}