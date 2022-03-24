LC1605 Find Valid Matrix Given Row and Column Sums
vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=colSum.size();
        int m=rowSum.size();
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                ans[i][j]=min(rowSum[i],colSum[j]);
                rowSum[i]-=ans[i][j];
                colSum[j]-=ans[i][j];
            }
        return ans;
    }
