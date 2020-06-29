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
