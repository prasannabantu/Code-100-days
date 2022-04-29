class Solution {
public:
bool checkValid(vector<vector<int> >& mat) {
        int n=mat.size();

        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(mat[i][abs(mat[i][j])-1]<0) return 0;
                        mat[i][abs(mat[i][j])-1]*=-1;
                }
        }

        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(mat[j][abs(mat[i][j])-1]>0) return 0;
                        mat[j][abs(mat[i][j])-1]*=-1;
                }
        }
        return 1;


}
};
