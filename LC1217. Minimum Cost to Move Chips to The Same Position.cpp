class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {

        int n=pos.size();

        int ec=0; int oc=0;
        for(int i=0;i<n;i++)
        {
            if(pos[i]&1) oc++;
            else ec++;
        }
        return min(oc,ec);



    }
};
