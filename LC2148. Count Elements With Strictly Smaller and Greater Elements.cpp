class Solution {
public:
int countElements(vector<int>& nums) {
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++)
                if(nums[i]<a && nums[i]>b) cnt++;
        return cnt;
}
};
