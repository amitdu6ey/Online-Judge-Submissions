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
    int k, cnt[26]={0};
    cin>>k;
    string s, t="";
    cin>>s;
    for(int i=0; i<s.size(); i++)   cnt[s[i]-'a']++;
    for(int i=0; i<26; i++)
    {
        if(cnt[i]&&cnt[i]%k!=0)
        {
            cout<<-1;
            return 0;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(cnt[i])
        {
            int r=cnt[i]/k;
            while(r--) t+=(i+'a');
        }
    }
    for(int i=0; i<k; i++) cout<<t;
    return 0;
}