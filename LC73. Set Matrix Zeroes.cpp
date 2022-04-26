// 73. Set Matrix Zeroes
class Solution {
public:
void setZeroes(vector<vector<int> >& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        set<int>row;
        set<int>col;
        for(int i=0; i<m; i++)
                for(int j=0; j<n; j++)
                {
                        if(matrix[i][j]==0)
                        {
                                row.insert(i);
                                col.insert(j);
                        }
                }

        for (set<int>::iterator it=row.begin(); it!=row.end(); ++it)
        {
                for(int i=0; i<n; i++)
                        matrix[*it][i]=0;
        }



        for (set<int>::iterator it=col.begin(); it!=col.end(); ++it)
        {
                for(int i=0; i<m; i++)
                        matrix[i][*it]=0;
        }
}
};
