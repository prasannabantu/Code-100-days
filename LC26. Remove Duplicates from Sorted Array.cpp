int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        ans.push_back(nums[0]);
        for(int i=0; i<n-1; i++)
        {
                if(nums[i]!=nums[i+1])
                        ans.push_back(nums[i+1]);
        }
        nums=ans;
        return ans.size();
}
