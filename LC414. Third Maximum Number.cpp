class Solution {
public:
int thirdMax(vector<int>& nums) {
        set<int>st;
        for(auto i:nums) st.insert(i);
        if(st.size()<3) return *st.rbegin();
        set<int>::reverse_iterator it=st.rbegin();
        it++; it++;

        return *it;
}
};
