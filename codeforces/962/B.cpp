#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;

void compute(ll &a, ll &b, ll count){
    if(count%2==0){
        a-=(count/2);
        b-=(count/2);
    }
    else{
        if(a>b){
            a-=(count/2 + 1);
            b-=(count/2);
        }
        else{
            a-=(count/2);
            b-=(count/2 + 1);
        }
    }
    if(a<0){
        a=0;
    }
    if(b<0){
        b=0;
    }
}


ll solve(){
    ll n,a,b,pos1,pos2,count=0,sum;
    string s;

    cin>>n>>a>>b;
    cin>>s;

    sum=a+b;
    
    while((a+b>0)&&(s.length()>0))
    {
        pos1=s.find('.');
        if(pos1 == string::npos){
            break;
        }
        else{
            s=s.substr(pos1);
            pos1=0;
        }

        pos2=s.find('*');
        if(pos2==string::npos){
            count=s.length();
            compute(a,b,count);
            break;
        }
        else{
            count=pos2;
            compute(a,b,count);
            s=s.substr(pos2);
        }
    }
    return sum-a-b;
}

int main(void){
    cout<<solve();
    return 0;
}