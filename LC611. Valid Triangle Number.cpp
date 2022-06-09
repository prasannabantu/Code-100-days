class Solution {
public:

int bse(vector<int>&a, int l, int r, int x)
{
        while(l<=r && r<a.size())
        {
                int mid=l+(r-l)/2;
                if(a[mid]>=x)
                {
                        r=mid-1;
                }
                else
                        l=mid+1;
        }
        return l;

}

int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int n=nums.size();
        for(int i=0; i<n-2; i++)
        {
                int k=i+2;
                for(int j=i+1; j<n-1 && nums[i]!=0 ; j++)
                {
                        k=bse(nums,k,n-1,nums[i]+nums[j]);
                        cnt+=k-j-1;
                }
        }


        return cnt;

}
};
