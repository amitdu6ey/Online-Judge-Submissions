#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int,int>

using namespace std;

int solve(){
    ll n;
    cin>>n;
    vector<ii> a(n);
    vector<ii>::iterator i;
    tr(a,i){
        cin>>(*i).first>>(*i).second;
    }
    sort(all(a));
    for(typeof((a).begin() i = (a).begin()+1; i != (a).end(); i++){
        if((*(i-1)).second > (*(i)).second){
            return i - a.begin();
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k =solve();
    if(k==-1){
        cout<<k<<" "<<k;
    }
    else{
        cout<<k+1<<" "<<k;
    }
    return 0;
}