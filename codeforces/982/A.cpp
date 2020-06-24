#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#define ll long long

using namespace std;

void solve(){
	ll n;
	int flag=0;
	string s;
	cin>>n>>s;
	if(n==1){
	    if(s.compare("0")==0){
	        flag=1;
	    }
	}
	else{
	    ll len = s.length();
	    string sub;
	    for(int i=0;i<=len-3;i++){
		    sub = s.substr(i,3);
		if(sub.compare("000")==0){
			flag=1;
			break;
		}
	}
	if(flag == 0){
		for(int i=0;i<=len-2;i++){
			sub = s.substr(i,2);
			if(sub.compare("11")==0){
				flag=1;
			    }
		    }
		}
	if(flag==0){
	    string s1=s.substr(0,2);
	    string s2=s.substr(n-2,2);
	    if(s1.compare("00")==0 || s2.compare("00")==0){
	        flag=1;
	    }
	}
	}
	if(flag==1){
		cout<<"No"<<"\n";
	}
	else{
		cout<<"Yes"<<"\n";
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