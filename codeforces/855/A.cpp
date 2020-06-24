#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
int main(){
    int n,i,j;
    vector <string> s(101);
    int p[101]={0};
    cin>>n;
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=n-1;i>=0;i--)
    for(j=i-1;j>=0;j--)
    if(s[i]==s[j])
    p[i]=1;
    
    for(i=0;i<n;i++){
    if(p[i]==1)
    cout<<"YES \n";
    else
    cout<<"NO \n";
}
return 0;
}