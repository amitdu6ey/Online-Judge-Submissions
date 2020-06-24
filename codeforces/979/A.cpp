#include<iostream>
#define ull unsigned long long

using namespace std;

int main(){
    ull n,ans;
    cin>>n;
    if(n==0){
        ans=0;
    }
    else if(n%2==0){
        ans=n+1;
    }
    else{
        ans=(n+1)/2;
    }
    cout<<ans<<"\n";
    return 0;
}