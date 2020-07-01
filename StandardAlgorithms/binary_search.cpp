// Recursive Approach
int binary_search(vector<int>& a, int l, int r, int k){
    if(l>r) return -1;
    int mid = l + (r-l)/2;
    if(a[mid] == k) return mid;
    else if(k > a[mid]) return binary_search(a,mid+1,r,k);
    return binary_search(a,l,mid-1,k);
}

// Iterative Approach
int binary_search(vector<int>& a, int l, int r, int k){
    while(l<=r){
        int mid = l + (r-l)/2;
        if(a[mid]==k) return mid;
        else if(k > a[mid]) l = mid+1;
        else r = mid-1;
    }
    return -1;
}
