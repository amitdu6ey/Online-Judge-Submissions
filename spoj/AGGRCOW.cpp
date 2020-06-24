#include <bits/stdc++.h>
 
using namespace std;
 
int n,c;
vector<int> a;
 
int f(int x){
    int cows=1, lastpos=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-lastpos >= x ){
            cows++;
            lastpos=a[i];
        }
        if(cows>=c)  return 1;
    }
    return 0;
}
 
void solve(){
    cin>>n>>c;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0, r=a[n-1]-a[0]+1,mid;
    while(r-l>=1){
        mid = (l+r)/2;
        if(f(mid)==0)   r=mid;
        else l = mid;
    }
    cout<<l<<endl;
}
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
