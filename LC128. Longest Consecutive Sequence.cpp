class Solution {
public:
int longestConsecutive(vector<int>& nums) {
        set<int>se;
        for(auto i:nums)
                se.insert(i);
        if(se.size()==0) return 0;
        int bestL=1;

        for(auto num:se)
        {
                if(se.find(num-1)==se.end())
                {
                        int ne=num+1;
                        while(se.find(ne)!=se.end())
                        {
                                ne++;
                        }
                        bestL=max(bestL,ne-num);
                }
        }
        return bestL;

}
};
