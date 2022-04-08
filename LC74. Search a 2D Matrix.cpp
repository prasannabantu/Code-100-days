// 74. Search a 2D Matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t=m*n;

        int l=0; int r=t-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(matrix[mid/n][mid%n]==target) return 1;
            if(matrix[mid/n][mid%n]<target) l=mid+1;
            else r=mid-1;

        }
        return 0;
    }
};
