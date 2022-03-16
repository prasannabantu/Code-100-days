// LC883 Projection Area of 3D Shapes
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum=0;
        int m=grid.size();
        int n=grid[0].size();

        // vector<int>mR;

        for(int i=0;i<m;i++)
            sum+=(*max_element(grid[i].begin(),grid[i].end()));

         int c=0;
        for(int i=0;i<n;i++)
        {
            int maxi=0;

            for(int j=0;j<m;j++)
            {
                maxi=max(grid[j][i],maxi);
                if(grid[j][i]==0) c++;
            }
            sum+=maxi;
        }


        sum+=(m*n)-c;
        return sum;

    }
};
