class Solution {
public:
vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        for(auto num:nums) mp[num]++;
        vector<int>a={0,0};
        for(auto t:mp)
                if(t.second%2==0) a[0]+=t.second/2;
                else
                {
                        int k=t.second%2;
                        a[0]+=t.second/2;
                        a[1]+=k;
                }
        return a;
}
};
