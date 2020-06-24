#include<bits/stdc++.h>

using namespace std;

char a[51][51];
int dp[51][51]={};

int h,w;
int dr[8] = {-1,-1,-1,0,0,1,1,1,};
int dc[8] = {-1,1,0,-1,1,-1,1,0};

int dfs(int r, int c){
    if(dp[r][c]!=0)   return dp[r][c];
    for(int i=0;i<8;i++){
        if(r+dr[i]<0||c+dc[i]<0||r+dr[i]>=h||c+dc[i]>=w)   continue;
        if((int)(a[r+dr[i]][c+dc[i]]-a[r][c])==1)  dp[r][c]=max(dp[r][c], 1+dfs(r+dr[i],c+dc[i]));
    }
    return dp[r][c];
}

int main(){
    int t=1,ans=0,base=0;
    cin>>h>>w;
    while(h!=0&&w!=0){
        base=0;
        ans=0;
        memset(dp,0,sizeof(dp));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(a[i][j]=='A'){
                    base=1;
                    ans=max(ans,dfs(i,j));
                }
            }
        }
        cout<<"Case "<<t++<<": "<<ans+base<<endl;
        /*
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cin>>h>>w;
    }
}
