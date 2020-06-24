//  [amitdu6ey]
// g++ -std=c++11 -o2 -Wall filename.cpp -o filename
#include <bits/stdc++.h>
#define hell 1000000009
#define bug1(x) cout<<"$ "<<x<<" $"<<endl
#define bug2(x) cout<<"% "<<x<<" %"<<endl
#define bug3(x) cout<<"# "<<x<<" #"<<endl
#define ll long long
#define pb push_back
#define mp make_pair
#define tr(z) for(auto it=z.begin(); it!=z.end(); it++)
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

void solve(){
    int a,b,c,ans=0,d=0;
    cin>>a>>b>>c;
    int w[7]={0,1,2,0,2,1,0};
    if(a>=3&&b>=2&&c>=2){
        d = min({a/3, b/2, c/2});
        a-=d*3;
        b-=d*2;
        c-=d*2;
    }
    for(int i=0;i<7;i++){
        int s=i;
        int a1=a;
        int b1=b;
        int c1=c;
        int ans1=0;
        do{
            if(w[s]==0){
                if(a1==0)   break;
                a1--;
            }
            else if(w[s]==1){
                if(b1==0)   break;
                b1--;
            }
            else{
                if(c1==0)   break;
                c1--;
            }
            s++;
            s%=7;
            ans1++;
        }while(s!=i);
        //cout<<i<<" "<<ans1<<endl;
        ans=max(ans,ans1);
    }
    cout<<d*7+ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}