//2022. Convert 1D Array Into 2D Array
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n));
        int t=original.size();
        if(m*n !=t) return {};
        for(int i=0;i<t;i++)
        {
            ans[i/n][i%n]=original[i];
        }
        return ans;
    }
};
