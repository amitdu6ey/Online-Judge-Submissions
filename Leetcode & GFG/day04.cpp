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

// O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, bool> vis;
        for(int num : nums){
            vis[num] = true;
        }
        for(auto num : nums){
            if(vis[num - 1] == false){
                // means sequence starts here
                int cur_len = 0;
                while(vis[num + cur_len])   cur_len++;
                ans = max(ans, cur_len);
            }
        }
        return ans;
    }
};

4. Longest Subarray with 0 sum 
    
int maxLen(int nums[], int n) {
    unordered_map<int, int> vis;
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++) {
        sum += nums[i];
        vis[sum]=-1;
    }
    sum = 0;
    for(int i=0;i<n;i++) {
        sum += nums[i];
        if(sum == 0) ans = max(ans, i+1);
        else if(vis[sum] != -1)
            ans = max(ans, i - vis[sum]);
        else
            vis[sum]=i;
    }
    return ans;
}
