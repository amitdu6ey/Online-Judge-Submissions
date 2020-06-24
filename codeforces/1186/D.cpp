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
    ll n,pos=0,neg=0;
    cin>>n;
    vll a(n);
    vll p(n);
    loop(i,0,n){
        double x;
        cin>>x;
        a[i]=(ll)(x);
        //cout<<a[i]<<"\n";
        if(comp((double)(a[i]),x))  p[i]=a[i];
        else if(x<0)    p[i]=a[i]-1;
        else p[i]=a[i]+1;
    }
    loop(i,0,n){
        if(a[i]>0)  pos+=a[i];
        else if(a[i]<0) neg+=abs(a[i]);
        //cout<<a[i]<<endl;
    }
    loop(i,0,n){
        //bug1(a[i]);
        //bug1(p[i]);
        if(a[i]==p[i]) continue;
        if(pos==neg)    break;
        if(a[i]<0 and pos>neg){
            a[i]=p[i];
            neg++;
        }
        else if(a[i]>0 and pos<neg){
            a[i]=p[i];
            pos++;
        }
        else if(a[i]==0){
            if(pos>neg and p[i]<a[i]){
                a[i]=p[i];
                neg++;
            }
            else if(pos<neg and p[i]>a[i]){
                a[i]=p[i];
                pos++;
            }
        }
        //bug2(pos);
        //bug3(neg);
    }
    loop(i,0,n){
        cout<<a[i]<<"\n";
    }
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