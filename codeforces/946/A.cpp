#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<cstdio>
#include<string.h>
#include<algorithm>
#define ll long long

using namespace std;

ll i=0, j=0,k=0;
ll counter=0;

int solve(){
    ll n,sum_bc=0,sum_b=0,sum_c=0;
    ll a[109] = {0};
    cin>>n;
    
    for(ll i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    
    for(ll i=0;i<n;i++){
        sum_bc+=a[i];
        if(a[i]>0){
            sum_b+=a[i];
        }
    }
    sum_c = sum_bc - sum_b;
    cout<<sum_b - sum_c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}