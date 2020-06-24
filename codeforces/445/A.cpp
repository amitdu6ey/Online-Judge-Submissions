#include<bits/stdc++.h>

using namespace std;

int n,m;
char a[101][101];
bool ans[101][101];

void f(int r, int c){
    if(a[r][c]=='.'){
        if(r-1>=0 && a[r-1][c]=='.')    ans[r][c]=!ans[r-1][c];
        else
        if(c-1>=0 && a[r][c-1]=='.')    ans[r][c]=!ans[r][c-1];
        else ans[r][c]=true;
    }
    if(r+1<n)   return f(r+1,c);
    else if(c+1<m)  return f(r,c+1);
    else return;
}

int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(a[i][j]=='-')    cout<<'-';
            else{
                if((i+j)%2==0){
                    cout<<'W';
                }
                else{
                    cout<<'B';
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}