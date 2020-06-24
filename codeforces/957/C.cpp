#include<bits/stdc++.h>
#define ld long double

using namespace std;


void solve(){
    ld n,u,i,k,eff,loss;
    double max = -1.000000000,min = 2.0000000000;
    cin>>n>>u;
    k=n-1;
    vector<ld> e(n);
    vector<ld>::iterator it;
    for(it=e.begin();it!=e.end();it++)
        cin>>*it;
//........Ei Ej.......{=U}....Ek...
//........Ei Ej.......{<=U}......Ek
    for(i=0;i<=n-3;i++){
        while(e[k]-e[i]>u)
            k--;
        loss = (e[i+1]-e[i])/(e[k]-e[i]);
        if(loss<min)
            min = loss;
        k = n-1;
    }
    max = 1.0000000000-min;
    cout.precision(15);
    std::cout.setf( std::ios::fixed, std::ios::floatfield);
    std::cout << max << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}