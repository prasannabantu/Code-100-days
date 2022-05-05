class Solution {
public:
bool searchMatrix(vector<vector<int> >& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t=m*n;
        int l=0; int r=n-1;
        while(l<=m-1 && r>=0)
        {
                int k=matrix[l][r];
                if(k==target) return 1;
                if(k<target) l++;
                else
                if(k>target) r--;
        }

        return 0;
}
};
