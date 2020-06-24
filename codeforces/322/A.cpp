#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cin>>n>>m;
    cout<<m+n-1<<"\n";
    for(i=0;i<m;i++)
    cout<<'1'<<" "<<i+1<<"\n";
    for(i=1;i<n;i++)
    cout<<i+1<<" "<<'2';
    return 0;
}