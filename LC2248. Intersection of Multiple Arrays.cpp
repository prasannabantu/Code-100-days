class Solution {
public:
vector<int> intersection(vector<vector<int> >& nums) {
        bitset<1001>bt1;
        bitset<1001>bt2;
        bt2.set();
        for(auto num:nums)
        {
                for(int i=0; i<num.size(); i++)
                        bt1[num[i]]=1;
                // for(int i=0;i<6;i++)
                //     cout<<bt2[i]<<" ";
                // cout<<"\n";
                bt2=bt2 & bt1;
                bt1.reset();
        }
        vector<int>ans;
        for(int i=1; i<=1000; i++)
                if(bt2[i]) ans.push_back(i);
        return ans;
}
};
