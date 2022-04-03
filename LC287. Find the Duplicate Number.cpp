class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>se; int n=se.size();
        for(auto i:nums)
        {
            n=se.size();
            se.insert(i);
            if(n==se.size()) return i;
        }
        return 0;
    }
};
