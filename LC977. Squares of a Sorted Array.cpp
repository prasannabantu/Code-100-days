class Solution {
public:
vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0; int r=n-1;
        vector<int> res(n);
        for(int i=n-1; i>=0; i--)
        {
                if(abs(nums[r])>abs(nums[l])) res[i]=nums[r]*nums[r--];
                else res[i]=nums[l]*nums[l++];
        }
        return res;
}
};
