class Solution {
public:
int maxRob(vector<int>&nums,int beg,int end)
{
        int pre=0; int cur=0;
        for(int i=beg; i<=end; i++)
        {
                int t=max(pre+nums[i],cur);
                pre=cur;
                cur=t;
        }
        return cur;

}
int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return n ? nums[0]:0;
        return max(maxRob(nums,0,n-2),maxRob(nums,1,n-1));
}
};
