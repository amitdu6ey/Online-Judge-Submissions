#include <bits/stdc++.h>
#define hell 1000000009
#define bug(x) cout<<"$ "<<x<<" $"<<endl
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
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
using namespace std;

int main()
{
    ll n, l, r, sum1=0, sum2=0, sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r;
        if(l==r)
        {    
            if(l%2==0)
                cout<<l<<endl;
            else
                cout<<-l<<endl;
        }
        else
        {    
            --l;
            if(l%2==0)
                sum1=l/2;
            else
                sum1=l/2-l;
            if(r%2==0)
                sum2=r/2;
            else
                sum2=r/2-r;
            cout<<sum2-sum1<<endl;
        }
    }
    return 0;
}