#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#define ll long long
using namespace std;

ll i=0;
ll j=0;

typedef struct server{
	string name;
	char ip[100];
};

typedef struct cmd{
	string name;
	char ip[100];
};

int solve(){
	ll n,m;
	cin>>n>>m;
	server s[n];
	cmd c[m];
	for(i=0;i<n;i++){
		cin>>s[i].name;
		cin>>s[i].ip;
	}
	for(i=0;i<m;i++){
		cin>>c[i].name;
		cin>>c[i].ip;
	}
	for(i=0;i<m;i++)
	for(j=0;j<n;j++){
		if(!strncmp(c[i].ip,s[j].ip,strlen(s[j].ip))){
			cout<<c[i].name<<" "<<c[i].ip<<" #"<<s[j].name<<"\n";
			break;
		}
	}
	return 0;
}

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}