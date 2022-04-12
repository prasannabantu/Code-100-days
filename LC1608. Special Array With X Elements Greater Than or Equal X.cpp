class Solution {
public:
int specialArray(vector<int>& nums) {
        int cnt[102]={};
        for(auto i:nums)
                cnt[i>100 ? 100:i]++;
        for(int i=100; i>=0; i--)
        {
                cnt[i]=cnt[i+1]+cnt[i];
                if(cnt[i]==i)
                        return i;
        }
        return -1;

}
};
