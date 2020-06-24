#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
  long long k,i;
  cin>>k;
  for(i=1;i<100;i++){

  if(pow(2,i)==k){
    cout<<"TAK";
    break;
  }
  if(pow(2,i)>k){
  cout<<"NIE";
  return 0;
  }
  }
  if(i>=100){
    cout<<"NIE";
  }

  return 0;
  }
