#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,s,tmp;
	cin>>m>>s;
	tmp=s;
	vector<int> arr(m,0);
	vector<int> vec(m,0);
	if(s==0 && m==1){
	    cout<<0<<" "<<0;
	    return 0;
	}
	if(s==0){
		cout<<-1<<" "<<-1;
		return 0;
	}
	if(s>9*m){
	    cout<<-1<<" "<<-1;
	    return 0;
	}
	for(int i=0;i<m;i++){
		if(tmp>=9){
			tmp-=9;
			arr[i]=9;
		}
		else if(tmp<=0){
			break;
		}
		else{
			arr[i]=tmp;
			break;
		}
	}
	vec[0]=1;
	tmp=s;
	tmp-=1;
	for(int i=m-1;i>=0;i--){
		if(tmp>=9){
			tmp-=9;
			vec[i]=9;
		}
		else if(tmp<=0){
			break;
		}
		else{
			vec[i]+=tmp;
			break;
		}
	}
	for(int i=0;i<m;i++){
		cout<<vec[i];
	}
	cout<<" ";
	for(int i=0;i<m;i++){
		cout<<arr[i];
	}
	return 0;
}