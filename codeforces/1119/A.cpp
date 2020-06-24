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
#define lop(i,n) for(ll i=0; i<n; i++)
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
using namespace std;

int main()
{
    fast
    ll n, ans=0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++)
        if(a[n-1]!=a[i])
        {
            ans=n-1-i;
            break;
        }
    for(ll i=n-1; i>=0; i--)
        if(a[0]!=a[i])
        {
            ans=max(ans,i);
            break;
        }
    cout<<ans;
    return 0;
}