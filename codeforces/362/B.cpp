#include <bits/stdc++.h> 
#define ll long long
#define l1 long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(x) cout<<"$ "<<x<<" $"<<endl
using namespace std;

int main()
{
    fast
    ll n, m;
    cin>>n>>m;
    ll a[3009];
    for(ll i=0; i<m; i++)
        cin>>a[i];
    sort(a,a+m);
    if(a[0]==1||a[m-1]==n)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        for(ll i=0; i<n-3; i++)
        {
            if(a[i]==(a[i+1]-1)&&a[i]==(a[i+2]-2))
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}