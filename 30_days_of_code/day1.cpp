442. Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        int n = a.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            // u -> v
            // we make already visited elements negative
            int u = i;
            int v = abs(a[i])-1;
            if(a[v] < 0){
                ans.push_back(v+1);
            }
            else{
                a[v] *= -1;
            }
        }
        return ans;
    }
};


75. Sort Colors


class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> f;
        for(auto num : nums){
            f[num]++;
        }
        int s = 0;
        for(int num = 0; num < 3 ; num++)
            while(f[num]!=0){
                nums[s] = num;
                s++;
                f[num]--;
            }
        return ;
    }
};


268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans1 = 0, ans2 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ans1 ^= nums[i];
            ans2 ^= i+1;
        }
        return ans1^ans2;
    }
};




88. Merge Sorted Array

// with O(n) space

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int i=0, j=0;
        while(i<m and j<n){
            if(nums1[i] <= nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        for( ; i<m; i++)
            temp.push_back(nums1[i]);
        for( ; j<n; j++)
            temp.push_back(nums2[j]);
        for(int k=0;k<m+n;k++)
            nums1[k]=temp[k];
    }
};

// with O(1) space












53. Maximum Subarray
// 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_till_now = 0, ans = std::numeric_limits<int>::min();
        for(int i=0;i<n;i++) {
            max_till_now += nums[i];
            ans = max(ans, max_till_now);
            if(max_till_now < 0) {
                max_till_now = 0;
            }
        }
        return ans;
    }
};



