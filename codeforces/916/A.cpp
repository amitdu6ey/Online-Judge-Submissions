#include <iostream>
#include<stdio.h>
#define ll long long
using namespace std;

int main() {
    int x,h,m,count=0;
	cin>>x;
	cin>>h>>m;
	while(h%10 != 7 && h/10 != 7  && m/10 != 7 && m%10 != 7){
	    if(m>=x){
	        m-=x;
	        count++;
	    }
	    else if(m<x&&h>0){
	        h--;
	        m=60-x+m;
	        count++;
	    }
	    else if(h==0&&m<x){
	        h=23;
	        m=60-x+m;
	        count++;
	    }
	}
	cout<<count;
	return 0;
}