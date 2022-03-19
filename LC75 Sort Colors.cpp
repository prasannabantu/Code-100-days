// LC75 Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>c(3,0);
        int n=nums.size();
        for(auto i:nums) c[i]++;
        int k=0;
        for(int i=0;i<3;i++)
        {
            int temp=0;
            while(temp<c[i])
            {
                nums[k++]=i;
                temp++;
            }
        }

    }

};
