// LC1351 Count Negative Numbers in a Sorted Matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int c=0;
        int m=g.size();
        int n=g[0].size();
        int i=0; int j=n-1;
        while(i!=m)
        {
            while(j>=0 && g[i][j]<0)  --j;
            c+=n-j-1;
            i++;
        }
        return c;
    }
};
