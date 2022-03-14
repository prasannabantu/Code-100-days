1572. Matrix Diagonal Sum


class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=(a[i][i]+a[i][n-1-i]);

        if(n%2)
            return sum-a[n/2][n/2];
        return sum;

    }
};
