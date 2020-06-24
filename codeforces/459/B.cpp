#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll n, b[200009],max=0,min=1000000009,i,cmax=0,cmin=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++){
        if(b[i]>max){
            max=b[i];
            cmax=0;
        }
        if(b[i]<min){
            min=b[i];
            cmin=0;
        }
        if(b[i]==max)
            cmax++;
        if(b[i]==min)
            cmin++;
    }
    cout<<max - min<<" ";
    cout<<cmax*cmin;
    return 0;
}