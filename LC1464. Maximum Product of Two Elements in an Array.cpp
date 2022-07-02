class Solution {
public:
int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
}
};

class Solution {
public:
int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int maxi1=0;
        int maxi2=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
                if(nums[i]>=maxi1)
                {
                        maxi2=maxi1;
                        maxi1=nums[i];

                }
                else
                if(nums[i]>maxi2)
                {
                        maxi2=nums[i];
                }
        }
        return (maxi1-1)*(maxi2-1);
}
};
