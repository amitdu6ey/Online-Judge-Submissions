#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans = 0;

void merge(vector<int>& a, int l, int mid, int r){
    int i=l, j=mid+1, k=0;
    vector<int> t(r-l+1);
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            t[k++]=a[i++];
        }
        else{
            ans+=(mid-i+1);
            t[k++]=a[j++];
        }
    }
    while(i<=mid){
        t[k++]=a[i++];
    }
    while(j<=r){
        t[k++]=a[j++];
    }
    k=0;
    for(int v=l;v<=r;v++){
        a[v]=t[k++];
    }
}

void merge_sort(vector<int>& a, int l, int r){
    if(r-l>=1){
        int mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    merge_sort(a,0,n-1);
    cout<<ans<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ans=0;
        solve();
    }
    return 0;
}
