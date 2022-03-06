

// Given an array nums.
// We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int n=nums.size();
        for(int i=1;i<n;i++)
            nums[i]=nums[i]+nums[i-1];
        return nums;
    }
};
