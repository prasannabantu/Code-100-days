class Solution {
public:
int oddCells(int m, int n, vector<vector<int> >& indices) {
        vector<vector<int> >grid(m,vector<int>(n,0));
        for(auto ind:indices)
        {
                int x=ind[0]; int y=ind[1];
                int i=x; int j=y;
                while(i>=0)
                {
                        grid[i][j]+=1;
                        i--;
                }
                i=x; j=y;
                while(j>=0)
                {
                        grid[i][j]+=1;
                        j--;
                }

                i=x+1; j=y;
                while(i<=m-1)
                {
                        grid[i][j]+=1;
                        i++;
                }

                i=x; j=y+1;
                while(j<=n-1)
                {
                        grid[i][j]+=1;
                        j++;
                }
        }

        int c=0;
        for(int i=0; i<m; i++)
                for(int j=0; j<n; j++)
                        if(grid[i][j]%2==1) c++;
        return c;

}
};
