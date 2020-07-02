(GFG) 1/N-th root of an integer (use binary search) (square root, cube root, ..)


int binary_search(int l, int r, int n, int m){
    if(l > r) return -1;
    int x = l + (r-l)/2;
    int p = pow(x,n);
    //bug1(p);
    if(p == m) return x;
    else if(p < m) return binary_search(x+1, r, n, m);
    else return binary_search(l, x-1, n, m);
}

void solve(){
    int n,m;
    cin>>n>>m;
    // x^n = m
    int l=1, r=1 + pow(2, log2(m)/n);
    cout<< binary_search(l,r,n,m)<<"\n";
    return;
}
