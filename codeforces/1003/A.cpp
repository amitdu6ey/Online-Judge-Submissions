#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int, int> count;
    for(int i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]=1;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count[a[i]]++;
        }
    }
    int max=-1;
    for(auto u : count){
        //cout<<u.first<<"=="<<u.second<<"\n ";
        if(u.second>max)
            max=u.second;
    }
    cout<<max;
    return 0;
}