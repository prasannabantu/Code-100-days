class Solution {
public:
int dominantIndex(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        auto i=max_element(nums.begin(),nums.end());
        int n1=*i;
        *i=-1;
        int n2=*max_element(nums.begin(),nums.end());
        if(n1>=2*n2) return i-nums.begin();
        return -1;
}
};
