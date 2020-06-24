#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    vector<int> a(n);
    vector<int> ans;
    stack<int> s;
    vector<bool> ok(n+1,false);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key=1,i=0;
    while(i<n){
        if(a[i]==key){
            ans.push_back(key);
            key++;
            i++;
        }
        else if(ok[key]){
            int x = s.top();
            if(x!=key){
                return false;
            }
            else{
                ans.push_back(x);
                s.pop();
                ok[key]=false;
                key++;
            }
        }
        else{
            s.push(a[i]);
            ok[a[i]]=true;
            i++;
        }
    }
    while(!s.empty()){
        int x = s.top();
        ans.push_back(x);
        s.pop();
    }
    
    for(int i=0;i<n;i++){
        if(ans[i]!=i+1)   return false;
    }
    return true;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n){
	    if(solve(n)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    cin>>n;
	}
	return 0;
}

	
	
	
