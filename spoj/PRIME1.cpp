#include <iostream>
#include<stdio.h>
#include<math.h>
#define ll long long
using namespace std;
ll isprime(int x){
    if(x == 1)
    return 0;
    for(ll i=2;i<=sqrt(x);i++){
        if(x%i == 0)
        return 0;
    }
    return 1;
}
ll gprime(ll m,ll n){
    for(ll i=m;i<=n;i++)
    if(isprime(i))
    cout<<i<<"\n";
    return 0;
}
int main() {
	ll t,m,n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    gprime(m,n);
	    cout<<"\n";
	}
	return 0;
}
