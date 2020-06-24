#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<double> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sum=0,max=-1;
    int index=-1;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            sum+=a[j];
        }
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    double avg=sum/k;
    int iter=index;
    int elem=k;
    while(iter--){
        if(a[iter]>avg){
            avg = elem*avg+a[iter];
            avg/=elem++;
        }
        else{
            break;
        }
    }
    iter=index+k;
    while(iter<n){
        if(a[iter]>avg){
            avg = elem*avg+a[iter];
            avg/=elem;
            iter++;
        }
        else{
            break;
        }
    }
    cout<<setprecision(16)<<avg;
    return 0;
}