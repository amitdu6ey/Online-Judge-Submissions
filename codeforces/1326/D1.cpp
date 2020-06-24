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
#define rloop(i,a,b) for(long long i=a; i>=b;i--)
#define loop(i,a,b) for(long long i=a; i<b; i++)
#define vbool vector< bool >
#define vvbool  vector< vector<bool> >
#define vchar vector<char>
#define vi vector<int>
#define vvi vector< vector<int> >
#define pll pair<long long, long long>
#define vll vector<long long>
#define vvl vector< vector<long long> >
#define ninf numeric_limits<long long>::min()
#define pinf numeric_limits<long long>::max()
#define comp(a,b) (abs(a-b)<1e-9) // to compare doubles
using namespace std;

string palindrome(string s){
    ll n = s.length();
    rloop(len,n,1){
        ll j=0, k=len-1;
        while(j<k and s[j]==s[k]){
            j++;
            k--;
        }
        if(j>=k)    return s.substr(0,len);
    }
    return "";
}

void solve(){
    string s;
    cin>>s;
    string a = "";
    string b = "";
    string c = "";
    ll n = s.length();
    ll m = n/2;
    loop(i,0,m){
        if(s[i]==s[n-i-1])    a = s.substr(0,i+1);
        else    break;
    }
    b = a;
    reverse(b.begin(), b.end());
    if(n == 2*a.size()){
        //cout<<"* : "<<a<<"-"<<b<<"\n";
        cout<<a<<b<<"\n";
        return;
    }
    string d = s.substr(a.size(), n-2*a.size());
    string x,y;
    x = palindrome(d);
    reverse(d.begin(), d.end());
    y = palindrome(d);
    reverse(y.begin(), y.end());
    if(x.length() > y.length()) c = x;
    else c = y;
    // bug1(x);
    // bug2(y);
    //cout<<"** : "<<a<<"-"<<c<<"-"<<b<<"\n";
    cout<<a<<c<<b<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int test_cases=1;
    cin>>test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}