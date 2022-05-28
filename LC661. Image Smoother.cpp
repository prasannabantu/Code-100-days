class Solution {
public:
vector<vector<int> > imageSmoother(vector<vector<int> >& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int> > a=grid;

        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        int avg=0; int c=0;
                        for(int x=max(i-1,0); x<=min(i+1,m-1); x++)
                        {
                                for(int y=max(j-1,0); y<=min(j+1,n-1); y++)
                                {
                                        avg+=grid[x][y]; c++;
                                }
                        }
                        a[i][j]=avg/c;
                }
        }
        return a;

}
};
