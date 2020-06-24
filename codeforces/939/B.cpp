#include<iostream>
#define ll long long
using namespace std;

int main(){
  ll n,k,a[100009],min,i,pos;
  cin>>n>>k;
  cin>>a[0];
  min=n%a[0];
  pos=0;
  for(i=1;i<k;i++){
    cin>>a[i];
    if(n%a[i]<min){
      pos=i;
      min=n%a[i];
    }
  }
cout<<pos+1<<" "<<n/a[pos];
  return 0;
}