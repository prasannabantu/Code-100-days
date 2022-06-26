class Solution {
public:
bool checkXMatrix(vector<vector<int> >& grid) {
        int n=grid.size();
        for(int i=0; i<n; i++)
        {
                if(grid[i][i]==0) return 0;
                if(grid[i][n-1-i]==0) return 0;
        }
        for(int i=0; i<n; i++)
        {

                for(int j=0; j<n; j++)
                {
                        if(i!=j && i!=n-1-j)
                                if(grid[i][j]!=0) return 0;

                }
        }

        return 1;


}
};
