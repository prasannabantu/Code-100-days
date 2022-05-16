class Solution {
public:
int countQuadruplets(vector<int>& nums) {
        int c=0;
        int n=nums.size();

        for(int i=0; i<=n-4; i++)
        {
                // if(i!=0 && nums[i]==nums[i-1]) continue;
                for(int j=i+1; j<=n-3; j++)
                {
                        // if(j!=1 && nums[j]==nums[j-1]) continue;
                        for(int k=j+1; k<=n-2; k++)
                        {
                                // if(k!=2 && nums[k]==nums[k-1]) continue;
                                for(int m=k+1 ; m<=n-1; m++)
                                {
                                        if(nums[i]+nums[j]+nums[k]==nums[m]) c++;
                                }
                        }
                }
        }
        return c;
}
};
