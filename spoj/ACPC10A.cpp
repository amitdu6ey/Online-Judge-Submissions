#include <iostream>
#include<stdio.h>
#include<math.h>
#define ld long double
#define m 100000007
using namespace std;
void check(ld a1,ld a2,ld a3){
    if(2*a2==(a1+a3)&&(a1!=0)&&(a2!=0)&&(a3!=0))
    cout<<"AP"<<" "<<a3+(a3-a2)<<endl;
    else if(a2==sqrt(a1*a3)&&(a1!=0)&&(a2!=0)&&(a3!=0))
    cout<<"GP"<<" "<<a3*(a3/a2)<<endl;
}
 
int main() {
	ld a1,a2,a3;
	cin>>a1>>a2>>a3;
	while(a1!=0 || a2!=0 || a3!=0){
	   check(a1,a2,a3);
	   cin>>a1>>a2>>a3;
	}
	
	return 0;
