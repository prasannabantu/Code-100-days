class Solution {
public:
int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN; int max2=0;
        for(int i=0; i<n; i++)
        {
                max2+=nums[i];
                if(max1<max2)
                        max1=max2;
                if(max2<0)
                        max2=0;
        }
        return max1;
}
};
