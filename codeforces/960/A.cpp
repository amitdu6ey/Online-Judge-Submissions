#include<iostream>
#include<algorithm>
#include<string>
#define ll unsigned long long

using namespace std;


void solve(){
    string s; // a b c
    ll ca=0,cb=0,cc=0;
    cin>>s;
    for(auto x : s){
        if(x=='a' && cb==0 && cc==0){
            ca++;
        }
        else if(x=='b' && ca!=0 && cc==0){
            cb++;
        }
        else if(x=='c' && ca!=0 & cb!=0){
            cc++;
        }
    }
    //cout<<s.length()<<"\n"<<ca<<"\n"<<cb<<"\n"<<cc<<"\n";
    if((ca==cc || cb==cc) && (ca+cb+cc == s.length())){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}