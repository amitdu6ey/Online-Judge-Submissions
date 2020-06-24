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
    int n;
    cin>>n;
    int a[n], sum[101]={0}, min=1;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<=100; i++)
        for(int j=0; j<n; j++)
            {
                if(a[j]>i)
                    sum[i]+=(a[j]-i-1);
                else if(a[j]<i)
                    sum[i]+=(i-a[j]-1);
                else
                    continue;
            }
    for(int i=1; i<100; i++)
        if(sum[i]<sum[min])
            min=i;
    sort(sum+1,sum+101);
    cout<<min<<" "<<sum[1];
    return 0;
}