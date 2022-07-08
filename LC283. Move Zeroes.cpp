class Solution {
public:

void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int nxt=0;
        for(int i=0; i<n; i++)
        {
                if(nums[i]!=0)
                        nums[nxt++]=nums[i];
        }
        for(int i=nxt; i<n; i++)
                nums[i]=0;
}
};

class Solution {
public:
void moveZeroes(vector<int>& nums) {
        for(int last=0,cur=0; cur<nums.size(); cur++)
        {
                if(nums[cur]!=0)
                        swap(nums[cur],nums[last++]);
        }


}
};
