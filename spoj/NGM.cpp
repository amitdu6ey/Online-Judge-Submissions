#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin>>n;
	if(n%10 == 0){
		cout<<2<<"\n";
	}
	else{
		cout<<1<<"\n";
		cout<< n%10 <<"\n";
	}
	return 0;
