
int minPairSum(vector<int>& nums) {

        int maxi=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0; int j=n-1;
        while(i<j)
        {
            int l=nums[i]+nums[j];
            if(maxi<l) maxi=l;
            i++; j--;
        }

        return maxi;
    }
