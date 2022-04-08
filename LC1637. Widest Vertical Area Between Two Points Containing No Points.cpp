class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        //int maxi=INT_MIN;
        int n=points.size();
        int maxii=points[1][0]-points[0][0];
        for(int i=2;i<n;i++)
            maxii=max(maxii,points[i][0]-points[i-1][0]);
        return maxii;
    }
};
