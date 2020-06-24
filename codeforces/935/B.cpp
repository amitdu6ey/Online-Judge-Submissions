#include<iostream>
#include<string>
#define ll long long
using namespace std;

int solve(){
  ll n,x=0,y=0,q,count=0,pos[100009];
  string s;
  cin>>n;
  cin>>s;
  pos[0]=0;
  for(ll i=0;i<n;i++){
    if(s[i]=='R'){
      x+=1;
    }
    else if(s[i]=='U'){
      y+=1;
    }
    if(x>y){
      pos[i+1]=1;
    }
    else if(x==y){
      pos[i+1]=0;
    }
    else if(x<y){
      pos[i+1]=-1;
    }
  }
  for(ll i=2;i<=n;i++){
    if(pos[i]==-pos[i-2]&&pos[i]!=0){
      count++;
    }
}
  cout<<count;
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