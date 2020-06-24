#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> f(m);
    for(int i=0;i<m;i++){
        cin>>f[i];
    }
    sort( f.begin(), f.end() );
    int min=1009;
    for(int i=0;i<m-n+1;i++){
        if(f[i+n-1]-f[i]<min){
            min=f[i+n-1]-f[i];
            //cout<<min<<"?"<<i<<"\n";
        }
        //cout<<"**"<<i;
    }
    cout<<min<<"\n";
    return;
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}