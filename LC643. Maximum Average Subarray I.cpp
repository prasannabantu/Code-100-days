class Solution {
public:
double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<k; i++)
        {
                sum+=nums[i];
        }
        int maxii=INT_MIN;
        maxii=max(maxii,sum);

        for(int i=k; i<n; i++)
        {
                sum+=nums[i]-nums[i-k];
                maxii=max(maxii,sum);
        }

        return (maxii*1.0)/k;
}
};
