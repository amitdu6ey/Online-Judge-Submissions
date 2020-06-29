171. Excel Sheet Column Number

class Solution {
public:
    int titleToNumber(string s) {
        // base 26 -> base 10
        int ans = 0;
        for(char c : s){
            ans *= 26;
            ans += c - 'A' + 1;
        }
        return ans;
    }
};

50. Pow(x, n)

//Range of int is from -2,147,483,648 to 2,147,483,647

class Solution {
public:
double myPow(double x, long long n)
    {
        if(n==0)
            return 1;
        else if(n%2==0)
            return ((n<0)?(1/myPow(x,(n)*(-1))):(myPow(x*x,n/2)));
        else
            return ((n<0)?(1/(myPow (x, (n)*(-1)  ) ) ):(x*myPow(x*x,(n-1)/2)));
    }
};
