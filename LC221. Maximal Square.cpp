// 221. Maximal Square
class Solution {
public:
int maximalSquare(vector<vector<char> >& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int ans=0;
        vector<vector<int> >dp(m,vector<int>(n));
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(mat[i][j]=='1')
                        {
                                dp[i][j]=1;
                                if(i!=0 && j!=0)
                                {
                                        dp[i][j]+=min({dp[i][j-1],dp[i-1][j-1],dp[i-1][j]});
                                }
                                ans=max(ans,dp[i][j]);
                        }
                }
        }
        return ans*ans;
}
};
