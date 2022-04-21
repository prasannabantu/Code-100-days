class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        int k=-1;
        for(auto i:nums)
        {
                st.insert(i);
                if(st.size()==k) return 1;
                k=st.size();
        }
        return 0;
}
};
