class Solution {
public:
int minSubArrayLen(int target, vector<int>& nums) {

        int n=nums.size();
        int l=0;
        int r=0;
        int minL=INT_MAX;
        int sum=0;
        while(r<n)
        {
                sum+=nums[r++];
                while(sum>=target)
                {
                        minL=min(minL,r-l);
                        sum-=nums[l++];
                }
        }

        return minL==INT_MAX ? 0 : minL;
}

};
