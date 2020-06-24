#include<iostream>
#include<stdio.h>
using namespace std;
int sum(int k){
    int s=0;
    while(k>0){
        s+=k%10;
        k/=10;
    }
    return s;
}

int solve(int n){
    int k,count=1;
    for(k=19;count<n;k+=9){
        if(sum(k+9)!=10)
        k+=9;
        count++;
    }
    cout<<k;
}

int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}