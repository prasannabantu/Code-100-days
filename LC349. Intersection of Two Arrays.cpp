class Solution {
public:
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bitset<1001>bt1;
        bitset<1001>bt2;
        for(auto i:nums1)
        {
                bt1[i]=1;
        }

        for(auto i:nums2)
        {
                bt2[i]=1;
        }

        bt2= bt2 & bt1;
        vector<int>ans;
        for(int i=0; i<=1000; i++)
                if(bt2[i]) ans.push_back(i);
        return ans;

}
};
