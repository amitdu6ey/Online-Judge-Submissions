#include<iostream>
#include<stdio.h>
#include<math.h>
#define ll long double
using namespace std;

int solve(){
  ll r,x1,y1,x2,y2,range,c,s,x,y;
  cin>>r>>x1>>y1>>x2>>y2;
  if(x1==x2&&y1==y2){
    cout<<x1<<" "<<y1<<" "<<0.0;
  }
  else if(r<=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)))
  cout<<x1<<" "<<y1<<" "<<r;
  else{
      c=(x1-x2)/(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
      s=(y1-y2)/(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
      if(x1>x2)
      x=x1+r*c;
      else
      x=x1-r*c;
      if(y1>y2)
      y=y1+r*c;
      else
      y=y1-r*c;
      range=sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
      cout<<(x+x2)/2<<" "<<(y+y2)/2<<" "<<range/2;
  }
  return 0;
}

int main(){
  solve();
}