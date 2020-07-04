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
