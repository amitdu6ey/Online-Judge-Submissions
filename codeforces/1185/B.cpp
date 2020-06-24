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
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    vector< pair<char, int> > a1;
    vector< pair<char, int> > a2;

    a1.pb({s1[0],1});
    int j=0;
    for(int i=1;i<n1;i++){
        if(s1[i]==s1[i-1]){
            a1[j].second++;
        }
        else{
            j++;
            a1.pb({s1[i],1});
        }
    }

    a2.pb({s2[0],1});
    j=0;
    for(int i=1;i<n2;i++){
        if(s2[i]==s2[i-1]){
            a2[j].second++;
        }
        else{
            j++;
            a2.pb({s2[i],1});
        }
    }

    int m1=a1.size();
    int m2=a2.size();

    if(m1!=m2){
        cout<<"NO"<<endl;
        return;
    }
    /*
    for(int i=0;i<m1;i++){
        cout<<a1[i].first<<" "<<a1[i].second<<" "<<a2[i].first<<" "<<a2[i].second<<endl;
    }
    */
    for(int i=0;i<m1;i++){
        if(a1[i].first!=a2[i].first or a1[i].second>a2[i].second){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
      solve();
    }
    return 0;
}