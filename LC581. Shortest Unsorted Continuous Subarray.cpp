class Solution {
public:
int findUnsortedSubarray(vector<int>& nums) {
        vector<int>t=nums;
        sort(t.begin(),t.end());
        int c=0;
        int n=nums.size();
        int mini=n-1;
        int maxi=0;
        for(int i=0; i<n; i++)
        {
                if(nums[i]!=t[i])
                {
                        mini=min(mini,i);
                        maxi=max(maxi,i);
                }
        }
        if(mini>=maxi) return 0;
        return maxi-mini+1;
}
};
