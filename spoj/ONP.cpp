#include<bits/stdc++.h>
#include<stack>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++)

using namespace std;

void solve(){
	string exp;
	vector<char> v{'(','+','-','/','*','^'};
	stack <char> s;
	vector<char> ans;
	cin>>exp;
	for(char c : exp){
		if(find(v.begin(),v.end(),c)!=v.end()){
			s.push(c);
		}
		else if(isalpha(c)){
			ans.push_back(c); 
		}
		else if(c==')'){
			ans.push_back(s.top());
			s.pop();
			s.pop();
		}
	}
	for(char u : ans){
		cout<<u;
	}
	cout<<"\n";
	return;
}

int main(){
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
