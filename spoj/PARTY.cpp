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
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

int W, n;

void solve(){
    int dp[n+1][W+1];
    loop(i,0,n+1){
        dp[i][0]=0;
    }
    loop(i,0,W+1){
        dp[0][i]=0;
    }
    int w, va;
    vector<int> wt(n+1);
    vector<int> val(n+1);
    for(int i=1;i<=n;i++){
        cin>>w>>va;
        wt[i]=w;
        val[i]=va;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(j<wt[i])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(val[i]+dp[i-1][j-wt[i]], dp[i-1][j]);
        }
    }
    int n_ans=n, W_ans=W;
    for(int j=0;j<=W;j++){
        if(dp[n][j]>=dp[n][W]){
            W_ans=j;
        }
    }

    int maxfun=dp[n][W];
	int minmoney=0;
	for(int i=0;i<=W;i++)
	{
		if(dp[n][i]==maxfun)
		{
			minmoney=i;
			break;
		}
	}
    cout<<minmoney<<" "<<maxfun<<endl;
    return;
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cout.tie(0);
    //cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    while(true){
      cin>>W>>n;
      if(W==0 and n==0) break;
      solve();
    }
    return 0;
}
