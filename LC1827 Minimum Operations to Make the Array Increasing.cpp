int minOperations(vector<int>& nums) {
       int n=nums.size();
       int c=0; int dif;
       for(int i=1;i<n;i++)
       {

           if(nums[i]<=nums[i-1])
           {
           dif=nums[i-1]-nums[i]+1;
           nums[i]+=dif;
           c+=dif;
           }

       }
       return c;
   }
