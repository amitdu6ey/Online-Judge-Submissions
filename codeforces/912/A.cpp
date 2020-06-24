#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    __int64 a,b,x,y,z,a1,b1;
    cin>>a>>b;
    cin>>x>>y>>z;
    a1=2*x+y - a;
    b1=3*z+y - b;
    if(a1<0)
    a1=0;
    if(b1<0)
    b1=0;
    cout<<a1+b1;
    return 0;
    }