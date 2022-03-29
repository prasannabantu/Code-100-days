class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int summ=0; int n=nums.size();
        for(auto i:nums)
            summ+=i;
        return (n*(n+1))/2-summ;
    }
};
