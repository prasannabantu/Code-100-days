class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int temp=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int l=i+1; int r=n-1;
            while(l<r)
            {
                int s=nums[i]+nums[l]+nums[r];
                if(temp>abs(target-s))
                {
                    ans=s;
                    temp=abs(target-s);
                    if(temp==0) return target;
                }
                if(s<target) l++;
                else if(s>target) r--;
            }
        }
        return ans;
    }
};
