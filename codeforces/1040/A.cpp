#include <bits/stdc++.h> 
#define ll long long
#define l1 long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{ 
    fast
    int n, a, b, i, j, sum=0;
    cin>>n>>a>>b;
    int c[n];
    for(i=0; i<n; i++)
    cin>>c[i];
        for(i=0, j=n-1; i<n/2, j>n/2; i++, j--)
        {
            if(c[i]!=c[j]&&c[i]!=2&&c[j]!=2)
            {
                cout<<"-1";
                return 0;
            }
            if(c[i]==c[j]&&c[i]!=2)
            continue;
            else
            {
                if((c[i]==1&&c[j]==2)||(c[i]==2&&c[j]==1))
                sum+=b;
                else if((c[i]==0&&c[j]==2)||(c[i]==2&&c[j]==0))
                sum+=a;
                else
                sum+=(2*min(a,b));
            }
        }
        if(n%2==0)
        cout<<sum;
        else
        {
            if(c[(n/2)]==2)
            sum+=min(a,b);
            cout<<sum;
        }
    return 0;
}