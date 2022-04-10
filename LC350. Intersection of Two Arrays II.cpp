// 350. Intersection of Two Arrays II
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int acnt[1001]={};
        int bcnt[1001]={};
        for(auto i:nums1)
            acnt[i]++;
        for(auto i:nums2)
            bcnt[i]++;
        vector<int>ans;
        int t;
        for(int i=0;i<=1000;i++)
        {
            t=min(acnt[i],bcnt[i]);
            if(t!=0)
                for(int k=0;k<t;k++)
                    ans.push_back(i);
        }
        return ans;

    }
};
