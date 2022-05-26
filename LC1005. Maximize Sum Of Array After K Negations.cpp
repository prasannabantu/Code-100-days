class Solution {
public:
int largestSumAfterKNegations(vector<int>& nums, int k) {
        int ncount=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int i=0;

        while(i<n && nums[i]<0 && k--)
        {
                nums[i]*=-1;
                i++;
        }
        sort(nums.begin(),nums.end());

        if(nums[i]==0) return accumulate(nums.begin(),nums.end(),0);
        if(k)
        {
                if(k%2==1) nums[0]*=-1;
        }

        return accumulate(nums.begin(),nums.end(),0);

}
};
