#include<iostream>

#define ll long long

using namespace std;

void solve(ll a,ll b){
    ll ans;
    if(a==0 && b==0){
        ans=0;
    }
    else if(a==b){
        ans=1;
    }
    else if(a>b){
    ans = a/(b+1);
    if(a%(b+1)!=0){
        ans+=1;
        }
    }
    else{
        ans = b/(a+1);
        if(b%(a+1)!=0){
            ans+=1;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ll a,b;
    while(true){
        cin>>a>>b;
        if(a==-1 || b==-1){
            break;
        }
        else{
            solve(a,b);
        }
    }
    return 0;
}
