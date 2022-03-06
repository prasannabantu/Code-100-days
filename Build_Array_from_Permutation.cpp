// 1920. Build Array from Permutation

// Given a zero-based permutation nums (0-indexed), build an array ans of the same length
// where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(nums.size());
        for(int i=0;i<n;i++)
            ans[i]=nums[nums[i]];
        for(int i=0;i<n;i++)
            nums[i]=ans[i];
        return nums;
    }
};
