
// CPP Program to find the number in a
// range having maximum product of the
// digits

#include <bits/stdc++.h>
using namespace std;

int product(int x)
{
    int prod = 1;
    while (x) {
        prod *= (x % 10);
        x /= 10;
    }
    return prod;
}
int f(int l, int r){
    string a = to_string(l);
    string b = to_string(r);
    int ans = r;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '0')
            continue;
        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';
        for (int j = i + 1; j < curr.size(); j++)
            curr[j] = '9';
        int num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');
        if (num >= l && product(ans) < product(num))
            ans = num;
    }

    return ans;
}

int main(){
    int l = 1, r = 10;
    cin>>r;
    if(r%10==r){
        cout<<r;
        return 0;
    }
    int n = f(l, r);
    int ans=1;
    while(n>0){
        ans*=n%10;
        n/=10;
    }
    cout<<ans;
    return 0;
}