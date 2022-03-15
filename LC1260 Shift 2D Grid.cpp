LC1260 Shift 2D Grid
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();  int n=grid[0].size();
        int lis=m*n;
        vector<int>a;
        int temp=0;
        
        //Copying into a linear array
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                a.push_back(grid[i][j]);

        k=k%lis;
        vector<int>bag;
        temp=lis-1;

        //Temporarily saving k elements
        for(int i=0;i<k ;i++)
            bag.push_back(a[temp--]);

        temp=lis-1; int r=lis-1-k;
        for(int i=0; i<=lis-1-k;i++)
        {
            a[temp--]=a[r--];
        }

        temp=k-1;
        for(int i=0;i<k;i++)
        {
            a[i]=bag[temp--];
        }

        temp=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                grid[i][j]=a[temp++];
            }

        return grid;

    }
};
