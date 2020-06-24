#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,b;
    cin>>n>>b;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> price;
    ll count=0,ce=0,co=0;
    //sort(a.begin(), a.end());
    for(ll i=0;i<n-1;i++){
        if(a[i]%2==0)
        ce++;
        else
        co++;
        if(ce==co){
            if(a[i+1]>a[i]){
                price.push_back(a[i+1]-a[i]);
            }
            else{
                price.push_back(a[i]-a[i+1]);
            }
            ce=0;
            co=0;
        }
    }
    sort(price.begin(), price.end());
    /*for(auto u : price){
        cout<<u<<"\n";
    }*/
    for(ll i=0;i<price.size();i++){
        if(b>=price[i]){
            count++;
            //cout<<price[i]<<", ";
            b-=price[i];
        }
        else{
            break;
        }
    }
    cout<<count<<"\n";
}