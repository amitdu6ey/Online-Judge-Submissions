#include<iostream>
#include<stdio.h>
#define ll long long

using namespace std;

ll lookup[1000009]={0};
ll f_pre[1000009]={0};

ll f(ll n){
    if(f_pre[n]!=0)
    return f_pre[n];
  ll k,prod=1;
  k=n;
  while(k>0){
    if(k%10!=0)
        prod*=k%10;
    k/=10;
  }
  f_pre[n]=prod;
  return prod;
}


ll g(ll n){
  if(lookup[n]!=0){
    return lookup[n];
  }
  else if(n<10){
    lookup[n]=n;
    return lookup[n];
  }
  else{
    lookup[n]= g(f(n));
    return lookup[n];
  }
}

ll solve(ll l, ll r, ll k){
    ll i,count=0;
  for(i=l;i<=r;i++){
    if(g(i)==k){
      count++;
    }
  }
  cout<<count<<"\n";
  return 0;
}

int main(){
  ll q,l[200009],r[200009],k[200009];
  cin>>q;
  for(ll i=0;i<q;i++)
  cin>>l[i]>>r[i]>>k[i];
  for(ll i=0;i<q;i++){
    solve(l[i],r[i],k[i]);
  }
}