#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int b[n][m];
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]^b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i][j]==1){
                c[0][0]=!c[0][0];
                c[0][j]=!c[0][j];
                c[i][0]=!c[i][0];
                c[i][j]=!c[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i][j]==1){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}