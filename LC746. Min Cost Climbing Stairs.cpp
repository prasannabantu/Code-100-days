class Solution {
public:
int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int n=cost.size();
        for(int i=n-3; i>=0; i--)
        {
                cost[i]+=min(cost[i+1],cost[i+2]);
        }
        return min(cost[0],cost[1]);
//

}
};


class Solution {
public:
int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp=cost;
        for(int i=2; i<n; i++)
        {
                dp[i]=min(dp[i-1],dp[i-2])+dp[i];
        }
        return min(dp[n-1],dp[n-2]);
}
};

class Solution {
public:
int rob(vector<int>& nums) {
        int n=nums.size();
        int h1=0; int h2=0; int c=0;
        for(auto n:nums)
        {
                c=max(h2,h1+n);
                h1=h2;
                h2=c;
        }
        return c;
}
};
