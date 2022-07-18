class Solution {
public:
int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size();
        int total=0;
        for(int i=n-1; i>=0;)
        {
                if(i>=0) total+=cost[i];
                if(i-1>=0) total+=cost[i-1];
                i=i-3;
        }
        return total;
}
};
