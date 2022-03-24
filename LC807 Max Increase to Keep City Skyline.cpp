class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> rmax(n,0);
        vector<int> cmax(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                rmax[i]=max(rmax[i],grid[i][j]);
                cmax[j]=max(cmax[j],grid[i][j]);
            }

        }

        int c=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int l=min(rmax[i],cmax[j]);
                if(grid[i][j]<l)
                    c+=l-grid[i][j];
            }

        return c;


    }
};
