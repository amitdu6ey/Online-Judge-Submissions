#include<iostream>
#include<string>
#define ll unsigned long long

using namespace std;


void solve(){
    ll n,i=0,n1;
    cin>>n;
    ll a[n],sum=0,sum1=0,sum2=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    
    i=0;
    
    do{
        sum1+=a[i];
        n1=i;
        i++;
    }while(2*sum1 < sum);
    
    if(2*sum1 == sum){
        cout<<"YES\n";
        exit(0);
    }
    else{
        sum2 = sum - sum1;
        for(i=0;i<=n1;i++){
            //cout<<sum1-a[i]<<"&"<<sum2 + a[i]<<"\n";
            if(sum1-a[i] == sum2 + a[i]){
                cout<<"YES\n";
                exit(0);
            }
        }
        cout<<"NO\n";
        exit(0);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}