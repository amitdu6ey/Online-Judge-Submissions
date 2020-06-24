#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#define ll long long
using namespace std;

void solve(){
	int n;
	string color;
	map<string, string> gem;
	map<string, string>::iterator itm;
	set<string> colors;
	set<string>::iterator it;
	vector<string> ans;
	gem["red"]="Reality";
	gem["blue"]="Space";
	gem["green"]="Time";
	gem["yellow"]="Mind";
	gem["orange"]="Soul";
	gem["purple"]="Power";
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>color;
		colors.insert(color);
	}
	for(auto x : gem){
		it=colors.find(x.first);
		if(it==colors.end()){
			ans.push_back(x.second);
		}
	}
	cout<<ans.size()<<"\n";
	for(auto x : ans){
		cout<<x<<"\n";
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