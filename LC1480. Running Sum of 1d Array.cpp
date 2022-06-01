class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        partial_sum(nums.begin(),nums.end(),nums.begin());
        return nums;
}
};
