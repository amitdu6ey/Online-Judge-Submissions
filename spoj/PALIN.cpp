#include<bits/stdc++.h>

using namespace std;

bool allnine(string s){
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]!='9')  return false;
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    if(allnine(s)){
        cout<<1;
        for(int i=0;i<n-1;i++)  cout<<0;
        cout<<1<<endl;
        return;
    }
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=(int)(s[i]-'0');
    }
    int mid1, mid2;
    mid1=mid2=n/2;
    if(n%2==0){
        mid1-=1;
    }
    while(a[mid1]==a[mid2]&&mid1>=0){
        mid1--;
        mid2++;
    }
    if(mid1<0||a[mid1]<a[mid2]){ //i.e palindrome or right > left
        int mid=n/2, carry=1;
        if(n%2==0)  mid-=1;
        while(mid>=0){
            a[mid]+=carry;
            carry=a[mid]/10;
            a[mid]%=10;
            mid--;
        }
    }
    for(int i=0;i<n/2;i++){
        a[n-i-1]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    return;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
