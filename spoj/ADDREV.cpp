#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#define ll long long
using namespace std;

int revit(ll a){
    ll dig=0,rev=0;
    do{
    dig = a % 10;
    a = a / 10;
    rev = rev * 10 + dig;
}while(a>0);
return(rev);
}
int main() {
	ll t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    a=revit(a);
	    b=revit(b);
	    cout<<revit(a+b)<<"\n";
	}
	return 0;
}
