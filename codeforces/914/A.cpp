#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
	ll n,a[1009],k,i;
	cin>>n;
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a, a+n);
	for(i=n-1;i>=0;i--){
	    k=sqrt(a[i]);
	    if(k*k!=a[i]){
	    cout<<a[i];
	    break;}
	    
	}
	return 0;
}