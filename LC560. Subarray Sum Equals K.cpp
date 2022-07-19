class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        int cnt=0;
        mp[0]++;
        for(auto num:nums)
        {
                sum+=num;
                cnt+=mp[sum-k];
                mp[sum]++;
        }
        return cnt;
}
};
