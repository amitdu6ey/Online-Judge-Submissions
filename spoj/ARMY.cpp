#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a[n-1]<b[m-1]){
        cout<<"MechaGodzilla"<<endl;
    }
    else{
        cout<<"Godzilla"<<endl;
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
