#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

ll n,k;
vector<ll> answer;
ll solve(){
    cin>>n>>k;
    if(n>=k){
        return (k-1)/2;
    }
    else if(k > 2*n -1){
        return 0;
    }
    else{
        return (((2*n - k + 1)/2));
    }
}

int main()
{
	std::ios::sync_with_stdio(false);
    cin.tie(0);
	int T=1;
	//cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
        cout<<solve();
	}
	return 0;
}