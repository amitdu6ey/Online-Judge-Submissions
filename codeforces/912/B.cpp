#include<iostream>
#include<stdio.h>
#include<math.h>
#define ll long long
using namespace std;
int main(){
    ll n,k,a=0,i=0;
    __int64 max;
    cin>>n>>k;
    if(k==1)
    cout<<n;
    else{
    while(a<n){
    a+=pow(2,i);
    i++;
    }
    i-=1;
    max=pow(2,i+1)-1;
    cout<<max;    
    }
return 0;
}