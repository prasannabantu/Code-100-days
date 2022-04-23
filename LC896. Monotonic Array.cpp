class Solution {
public:
bool isMonotonic(vector<int>& nums) {
        int mi=1; int md=1;
        int n=nums.size();
        for(int i=0; i<n-1; i++)
        {
                if(nums[i]>nums[i+1]) mi=0;
                if(nums[i]<nums[i+1]) md=0;
        }
        return mi|md;
}
};
