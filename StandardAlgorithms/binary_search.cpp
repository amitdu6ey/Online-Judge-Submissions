// Recursive Approach
int binary_search(vector<int>& a, int l, int r, int k){
    if(l>r) return -1;
    int mid = l + (r-l)/2;
    if(k == a[mid]) return mid;
    else if(k > a[mid]) return binary_search(a,mid+1,r,k);
    return binary_search(a,l,mid-1,k);
}

// Iterative Approach
int binary_search(vector<int>& a, int l, int r, int k){
    while(l<=r){
        int mid = l + (r-l)/2;
        if(k == a[mid]) return mid;
        else if(k > a[mid]) l = mid+1;
        else r = mid-1;
    }
    return -1;
}


// AGGRCOW - Aggressive cows

// iterative binary search
int n,c;
vector<int> a;
 
int f(int x){
    int cows=1, lastpos=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-lastpos >= x ){
            cows++;
            lastpos=a[i];
        }
        if(cows>=c)  return 1;
    }
    return 0;
}
 
void solve(){
    cin>>n>>c;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0, r=a[n-1]-a[0]+1,mid;
    while(r-l>1){
        mid = (l+r)/2;
        if(f(mid)==0)   r=mid;
        else l = mid;
    }
    cout<<l<<endl;
}


// recursive binary search

bool isPossible(vector<ll>& a, ll c, ll d){
    ll n = a.size();
    ll nxt = 0;
    int cows = 0;
    for(ll i=0;i<n;i++){
        if(cows >= c) return true;

        if(a[i] >= nxt) {
            cows++;
            nxt = a[i] + d;
        }
    }
    if(cows >= c) return true;
    return false;
}

// return max distance b/w cows possible
ll fit_cows(vector<ll>& a, ll l, ll r, ll c){
    if(l>r) return 0;
    ll mid = (l+r)/2;
    if(isPossible(a,c,mid)){
        // bug1(mid);
        return max( mid, fit_cows(a,mid+1,r,c) );
    }
    else{
        return fit_cows(a,l,mid-1,c);
    }

}

void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    // let d be distance b/w cows now do a Bsearch on d
    ll l=0, r=1e9 + 5;
    cout<< fit_cows(a,l,r,c) <<"\n";
    return;
}


