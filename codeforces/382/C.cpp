//  [amitdu6ey]
#include <bits/stdc++.h>
#define hell 1000000009
#define bug(x) cout<<"$ "<<x<<" $"<<endl
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
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<int>::min()
#define pinf numeric_limits<int>::max()
using namespace std;

bool isAP(vll& a, ll n){
    ll diff = a[1]-a[0];
    loop(i,1,n){
        if(a[i]-a[i-1]!=diff){
            return false;
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    vll a(n);
    vll b(n+1);
    loop(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    if(n==1){
        cout<<-1;
        return;
    }
    if(a[0]==a[n-1]){
        cout<<1<<"\n";
        cout<<a[0];
        return;
    }
    if(isAP(a,n)){
        ll diff = a[1]-a[0];
        if(n==2&&(a[0]+a[1])%2==0){
            cout<<3<<"\n";
            cout<<a[0]-diff<<" "<<(a[0]+a[1])/2<<" "<<a[1]+diff;
            return;
        }
        else{
            cout<<2<<"\n";
            cout<<a[0]-diff<<" "<<a[n-1]+diff;
            return;
        }
    }
    else{
        ll diff=pinf,x,y;
        loop(i,0,n-1){
            diff=min(a[i+1]-a[i],diff);
        }
        loop(i,1,n){
            if(a[i]!=a[i-1]+diff){
                x = a[i];
                y=a[i-1];
                loop(j,i+1,n){
                    if(a[j]!=a[j-1]+diff){
                        cout<<0;
                        return;
                    }
                }
                if((a[i]+a[i-1])%2==0){
                    ll k=0;
                    loop(j,0,n){
                        if(k==i){
                            b[k]=(a[i]+a[i-1])/2;
                            k++;
                        }
                        b[k]=a[j];
                        k++;
                    }
                    if(isAP(b,n+1)){
                        cout<<1<<"\n";
                        cout<<(a[i]+a[i-1])/2;
                        return;
                    }
                    cout<<0;
                    return;
                }
            }
        }
    }
    cout<<0;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int test_cases=1;
    //cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}