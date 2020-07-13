1. 2 Sum problem 

// O(n^2) time & O(1) space

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

// O(n) time & O(n) space
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> req;
        for(int i=0;i<n;i++){
            req[nums[i]]=i+1;
        }
        for(int i=0;i<n;i++){
            int val = target-nums[i];
            if(req[val]!=0 and req[val]!=i+1){
                int j = req[val]-1;
                return {i,j};
            }
        }
        return {};
    }
};


3. Longest Consequtive elements

// Brute Force

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int ans = 1, cur = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1] + 1){
                cur++;
                ans = max(ans, cur);
            }
            else if(nums[i] != nums[i-1])
                cur = 1;
        }
        return ans;
    }
};
