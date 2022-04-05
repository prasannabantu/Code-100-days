class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        int n=nums.size();
        int i=0; int j=n-1; int ans1=-1;
        if(n==0) return {-1,-1};

        while(i<=j)
        {
          int m=i+(j-i)/2;
          if(nums[m]==target) {ans1=m; j=m-1; continue;}
            if(nums[m]>target) j=m-1;
            if(nums[m]<target) i=m+1;
        }
        if(ans1==-1) return {-1,-1};
        ans[0]=ans1; cout<<ans1<<" ";

        i=0; j=n-1; int ans2=-1;
        while(i<=j)
        {
          int m=i+(j-i)/2;
          if(nums[m]==target) {ans2=m; i=m+1; continue;}
            if(nums[m]>target) j=m-1;
            if(nums[m]<target) i=m+1;
        }
        ans[1]=ans2;
        return ans;

    }
};
