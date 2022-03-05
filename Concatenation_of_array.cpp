// Given an integer array nums of length n, you want to create an array ans of length 2n
//where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
// Specifically, ans is the concatenation of two nums arrays.
// Return the array ans.

//  https://leetcode.com/problems/concatenation-of-array/
//1929. Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
            nums.push_back(nums[i]);
        return nums;
    }
};
