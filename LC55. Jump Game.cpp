class Solution {
public:
bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int lastInd=n;
        for(int i=n; i>=0; i--)
        {
                if(nums[i]+i>=lastInd) lastInd=i;
        }
        return lastInd==0;
}
};
