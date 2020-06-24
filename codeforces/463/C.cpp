//  [amitdu6ey]
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

ll a[2009][2009]={};
ll dp1[2009][2009]={};
ll dp2[2009][2009]={};

void solve(){
    ll n;
    cin>>n;
    loop(i,0,n){
        loop(j,0,n){
            cin>>a[i][j];   // i row j col
        }
    }
    loop(i,0,n){
        loop(x,0,n){
            if(i+x>=n)  break;
            dp1[0][i]+=a[x][i+x];
        }
    }
    loop(i,1,n){
        loop(x,0,n){
            if(i+x>=n)  break;
            dp1[i][0]+=a[i+x][x];
        }
    }
    loop(i,1,n){
        loop(j,1,n){
            dp1[i][j]=dp1[i-1][j-1];
        }
    }
    /***************************************************************/

    loop(i,0,n){
        loop(x,0,n){
            if(i-x<0)   break;
            dp2[0][i]+=a[x][i-x];
        }
    }

    for(ll i=1;i<n;i++){
        for(ll j=1;j<n;j++){
            if(n-j<0||i+j-1>=n)   break;
            dp2[i][n-1]+=a[i+j-1][n-j];
        }
    }

    loop(i,1,n){
        loop(j,0,n-1){
            dp2[i][j]=dp2[i-1][j+1];
        }
    }

    ll max1=ninf, max2=ninf,x1,x2,y1,y2;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(dp1[i][j]+dp2[i][j]-a[i][j]>max1&&(i+j)%2==0){
                max1=dp1[i][j]+dp2[i][j]-a[i][j];
                x1=i;
                y1=j;
            }

            if(dp1[i][j]+dp2[i][j]-a[i][j]>max2&&(i+j)%2==1){
                max2=dp1[i][j]+dp2[i][j]-a[i][j];
                x2=i;
                y2=j;
            }
        }
    }

    cout<<max1+max2<<"\n";
    cout<<x1+1<<" "<<y1+1<<" "<<x2+1<<" "<<y2+1<<"\n";

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}