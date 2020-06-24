#include<iostream>
#include<vector>
#include<string>

#define ll long long

using namespace std;

int main(){
  string a,b,c;
  vector <int> lookup(100000,-1);
  ll hd=0,k=0,i;
  cin>>a;
  cin>>b;
  for(i=0;a[i]!='\0';i++){
    if(a[i]!=b[i]){
      lookup[hd]=i;
      hd++;
    }
  }
  if(hd%2!=0){
    cout<<"impossible";
    return 0;
  }
  else{
    c=a;
    for(i=0;i<hd;i++){
        if(k%2==0){
          c[lookup[i]]=a[lookup[i]];
          k++;
        }
        else{
          c[lookup[i]]=b[lookup[i]];
          k++;
        }
    }
  }
  for(i=0;i<a.size();i++)
  cout<<c[i];
  return 0;
  }