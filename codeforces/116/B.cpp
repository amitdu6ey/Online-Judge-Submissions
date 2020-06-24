#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char a[11][11];
    int i,j;
    int n,m,count=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    cin>>a[i][j];
    
    for(i=0;i<n;i++)
    for(j=0;j<m-1;j++)
    if(a[i][j]=='W'&&a[i][j+1]=='P'||a[i][j]=='P'&&a[i][j+1]=='W'){
        a[i][j]='.';
        a[i][j+1]='.';
        count++;
        }
    for(j=0;j<m;j++)
    for(i=0;i<n-1;i++)
    if(a[i][j]=='W'&&a[i+1][j]=='P'||a[i][j]=='P'&&a[i+1][j]=='W'){
        a[i][j]='.';
        a[i+1][j]='.';
        count++;
        }
        cout<<count;
    return 0;
}