class Solution {
public:
int minFallingPathSum(vector<vector<int> >& matrix)
{
        int n=matrix.size();

        vector<vector<int> >dp=matrix;
        if(n==1) return *min_element(dp[n-1].begin(),dp[n-1].end());
        for(int i=1; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(j==0)
                        {
                                dp[i][j]=dp[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
                        }
                        else
                        if(j==n-1)
                        {
                                dp[i][j]+=min(dp[i-1][j],dp[i-1][j-1]);
                        }
                        else
                        {
                                dp[i][j]+=min({dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]});
                        }
                }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
}
};
