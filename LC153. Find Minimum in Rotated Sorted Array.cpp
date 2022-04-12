int findMin(vector<int>& nums) {
        int i=0; int n=nums.size();
        if(n==1) return nums[0];
        int j=n-1;
        if(nums[i]<nums[j])
                return nums[i];
        while(nums[i]<nums[i+1]) i++;
        return nums[i+1];

}
