#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int &a ,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
int main(){
    __int64 a[5009],max,count[5009]={0};
    int n,i,j,k=1;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    /*****bubble sort******/
    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
    /***********************/
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
        count[k]++;
        }
        else if(a[i]!=a[i+1]){
            k++;
        }
    }
    max=count[0];
    for(i=0;i<=k;i++){
        if(count[i]>max)
        max=count[i];
    }
    cout<<max+1;
    return 0;
}