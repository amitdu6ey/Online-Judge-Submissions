#include<iostream>
#include<vector>

using namespace std;

void solve(){
    long double n,sum=0,sum2=0;
    cin>>n;
    vector<long double> a(n);
    for(vector<long double>::iterator i = a.begin();i!=a.end();i++){
        cin>>a.at(i-a.begin());
        sum+=a.at(i-a.begin());
    }
    sum = sum/2;
    for(vector<long double>::iterator i =a.begin();i!=a.end();i++){
        sum2+=a.at(i-a.begin());
        if(sum2>=sum){
            cout<<i-a.begin()+1<<"\n";
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}