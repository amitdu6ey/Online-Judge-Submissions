#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define l1 long
#define ld long double
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(x) cout<<"$ "<<x<<" $"<<endl
#define bug(x) cout<<"& "<<x<<" &"<<endl
#define all(g) g.begin(),g.end()
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    fast
    ll n, k, count=0;
    cin>>n>>k;
    string str;
    cin>>str;
    vector<char> s(str.length());
    for(ll i=0;i<s.size();i++){
        s[i]=str[i];
    }
    int a=0;
    for(ll i=2; i<s.size(); i++)
    {
        if(s[i-2]==s[i]&&s[i-1]==s[i])
        {
            count++;
            if(s[i]=='A')    s[i-1]='B';
            else s[i-1]='A';
        }
    }
    for(ll i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
            for(ll j=0;j<k;j++){
                s[i]='A'+j;
                if(i==0&&s[i]!=s[i+1]){
                    break;
                }
                if(i>0&&s[i]!=s[i-1]&&s[i]!=s[i+1]){
                    break;
                }
                
            }
        }
    }
    /*for(ll i=1; i<s.size()-1; i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
            if(s[i]=='A'&&s[i+1]!='B')    s[i]='B';
            else if(s[i]=='A'&&s[i+1]=='B') s[i]='C';
            else if(s[i+1]!='A') s[i]='A';
            else if(s[i+1]=='A') s[i]='B';
        }
    }
    
    for(ll i=1; i<=s.size()-1; i+=2)
    {
        if(s[i]==s[i-1]||s[i]==s[i+1])
        {
            count++;
            char r=s[i-1];
            char q=s[i+1];
            while(a<k)
            {
                if(('A'+a!=r)&&('A'+a!=q))
                {
                    s[i]='A'+a;
                    break;
                }
                a++;
            }
            a=0;
        }
    }*/
    cout<<count<<endl;
    for(auto u : s){
        cout<<u;
    }
    return 0;
}