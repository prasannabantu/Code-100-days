//LC561 Array Partition I
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(); int c=0;
        for(int i=n-2;i>-1;i=i-2)
        {
            c+=nums[i];
        }
        return c;
    }
};
