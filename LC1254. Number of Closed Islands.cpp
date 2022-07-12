class Solution {
public:
int fill(vector<vector<int> >&grid,int i,int j)
{
        if(i<0 || j<0 || i==grid.size() || j==grid[0].size() || grid[i][j]) return 0;
        grid[i][j]=1;
        return 1+fill(grid,i-1,j)+fill(grid,i+1,j)+fill(grid,i,j-1)+fill(grid,i,j+1);
}
int closedIsland(vector<vector<int> >& grid) {
        for(int i=0; i<grid.size(); i++)
                for(int j=0; j<grid[0].size(); j++)
                {
                        if(i*j==0 || i==grid.size()-1 || j==grid[0].size()-1) fill(grid,i,j);
                }
        int cnt=0;
        for(int i=0; i<grid.size(); i++)
                for(int j=0; j<grid[0].size(); j++)
                {
                        cnt+=fill(grid,i,j)>0;
                }
        return cnt;

}
};





class Solution {
public:
bool dfs(vector<vector<int> >&g,int i, int j)
{
        if(i<0 || j<0 || i>=g.size() || j>=g[0].size()) return 0;
        if(g[i][j]==1) return 1;
        g[i][j]=1;
        bool d1=dfs(g,i+1,j);
        bool d2=dfs(g,i-1,j);
        bool d3=dfs(g,i,j+1);
        bool d4=dfs(g,i,j-1);
        return d1 && d2 && d3 && d4;
}

int closedIsland(vector<vector<int> >& g) {
        int cnt=0;
        for(int i=0; i<g.size(); i++)
        {
                for(int j=0; j<g[0].size(); j++)
                {
                        if(!g[i][j])
                                cnt+= (dfs(g,i,j)>0);
                }
        }
        return cnt;
}

};
