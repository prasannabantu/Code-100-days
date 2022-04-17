class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{

        unordered_map<int,int>mp;
        stack<int>s;
        for(auto n:nums2)
        {
                while(s.size() && s.top() < n)
                {
                        mp[s.top()]=n;
                        s.pop();
                }
                s.push(n);
        }
        vector<int>ans;
        for(auto i:nums1)
        {
                ans.push_back(mp.count(i) ? mp[i]:-1);
        }
        return ans;

}
};
