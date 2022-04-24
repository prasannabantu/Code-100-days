int minStartValue(vector<int>& nums) {
        int mini=nums[0]; int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {

                mini=min(mini,sum);
                sum+=nums[i];
        }
        mini=min(mini,sum);
        if(mini>0) return mini;
        if(mini==0) return 1;
        return -mini+1;
}
