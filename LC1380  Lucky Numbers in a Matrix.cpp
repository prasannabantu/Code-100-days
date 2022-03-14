class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& a) {
        vector<int>srow;
        vector<int>scol;
        int m=a.size(); int n=a[0].size();
        int maxi=0;
        for(int i=0;i<m;i++)
        {
            srow.push_back(*min_element(a[i].begin(),a[i].end()));

        }
        // return srow;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxi=max(a[j][i],maxi);
            }
            scol.push_back(maxi);
            maxi=0;
        }
        // return scol;
        vector<int>ans;
        for(int i=0;i<m;i++)
        {
            int t=srow[i];
            for(int j=0;j<n;j++)
            {
                if(t==scol[j]) ans.push_back(srow[i]);
            }
        }
        return ans;

    }
};
