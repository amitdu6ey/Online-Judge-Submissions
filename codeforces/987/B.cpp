#include<iostream>
#include<cmath>
#define ld long double
using namespace std;

void solve(){
    ld x,y,a,b;
    cin>>x>>y;
    a = x*log(y);
    b = y*log(x);
    if(a>b){
        cout<<"<\n";
    }
    else if(a<b){
        cout<<">\n";
    }
    else{
        cout<<"=\n";
    }
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}