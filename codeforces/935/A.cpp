#include<iostream>
#include<stdio.h>
#define ll long long
using namespace std;

int solve(){
  ll n,count=0;
  cin>>n;
  for(ll i=1;i<=n;i++){
    if((n-i)%i==0){
      count++;
    }
  }
  cout<<count-1;
  return 0;
}

int main(){
  ll t=1;
  //cin>>t;
  while(t--){
    solve();
  }
  return 0;
}