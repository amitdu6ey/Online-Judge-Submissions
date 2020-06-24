#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int

using namespace std;

ll n,h,a,b,ta,tb,fa,fb,k;

ll solve(){
    cin>>ta>>fa>>tb>>fb;
    if(ta==tb){
        return abs(fa-fb);
    }
    else if(fa<=b && fa>=a){
        return abs(tb-ta)+abs(fb-fa);
    }
    else if(fa<a){
        return abs(tb-ta)+abs(fa-a)+abs(fb-a);
    }
    else if(fa>b){
        return abs(b-fa)+abs(tb-ta)+abs(fb-b);
    }
}

int main()
{
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>h>>a>>b>>k;
	// cin.ignore(); must be there when using getline(cin, s)
	while(k--)
	{
        cout<<solve()<<"\n";
	}
	return 0;
}