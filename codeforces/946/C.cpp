#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<cstdio>
#include<string.h>
#include<algorithm>
#define ll long long


using namespace std;

ll solve(){
    string s;
    ll flag = 0,k=0,i,j,len;
    cin>>s;
    len = s.length();
    for( i=0;i<len;i++){
        for( j=i,k=0;j<i+26;j++, k++){
            if(s[j]>'a'+ k){
                break;
            }
        }
        if(j == 26 + i){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<-1;
    }
    else{
        j-=26;
        for(i=j,k=0;i<j+26;i++){
            s[i] = char('a' + k++);
        }
        cout<<s;
    }
}

int main(){
    solve();
    return 0;
}