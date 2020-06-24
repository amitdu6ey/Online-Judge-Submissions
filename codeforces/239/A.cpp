#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    __int64 n,k,x,y,i,flag=0;
    cin>>y>>k>>n;
    int a=k;
    if(y<n)
        for(i=2;a<=n;i++){
            if(a-y>0){
               cout<<a-y<<" ";
               flag=1;
            }
            a=k*i;
    }
    if(flag==0) cout<<-1;
    return 0;
    }