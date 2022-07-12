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
