class Solution {
public:
int dfs(vector<vector<int> >grid,int i,int j,vector<vector<bool> >&vis)
{
        if(vis[i][j]==1) return 0;
        vis[i][j]=1;
        int total=0;
        if(i-1>=0 && grid[i-1][j]==1) total+=dfs(grid,i-1,j,vis);
        if(i+1<=grid.size()-1 && grid[i+1][j]==1) total+=dfs(grid,i+1,j,vis);
        if(j-1>=0 && grid[i][j-1]==1) total+=dfs(grid,i,j-1,vis);
        if(j+1<=grid[0].size()-1 && grid[i][j+1]==1) total+=dfs(grid,i,j+1,vis);
        return 1+total;
}
int maxAreaOfIsland(vector<vector<int> >& grid) {
        int maxArea=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool> >vis(m,vector<bool>(n,0));
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(grid[i][j]==1 && vis[i][j]==0)
                                maxArea=max(maxArea,dfs(grid,i,j,vis));
                }
        }
        return maxArea;
}
};








class Solution {
public:
int dfs(vector<vector<int> >&grid,int i,int j)
{
        int total=0;
        if(grid[i][j]==1)
        {
                grid[i][j]=0;
                if(i-1>=0 && grid[i-1][j]==1) total+=dfs(grid,i-1,j);
                if(i+1<=grid.size()-1 && grid[i+1][j]==1) total+=dfs(grid,i+1,j);
                if(j-1>=0 && grid[i][j-1]==1) total+=dfs(grid,i,j-1);
                if(j+1<=grid[0].size()-1 && grid[i][j+1]==1) total+=dfs(grid,i,j+1);
                return 1+total;
        }
        return 0;
}
int maxAreaOfIsland(vector<vector<int> >& grid) {
        int maxArea=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(grid[i][j]==1)
                                maxArea=max(maxArea,dfs(grid,i,j));
                }
        }
        return maxArea;
}
};
