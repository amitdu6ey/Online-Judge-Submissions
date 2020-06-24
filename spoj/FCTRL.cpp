#include <iostream>
#include<stdio.h>
#define ll long long
#define m 1000000007
using namespace std;

void trail(ll k){
    ll counter = 0;
    while(k>0)
    {   k/=5;
        counter+=k;
    }
    cout<<counter<<"\n";
}

int main() {
    ll t,a;
    cin>>t;
    while(t--){
        cin>>a;
        trail(a);
    }
	return 0;
}
