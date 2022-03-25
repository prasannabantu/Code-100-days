
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<int>ans;
        vector<vector<int>>pa;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            pa.push_back({i,accumulate(mat[i].begin(),mat[i].end(),sum)});
            sum=0;
        }

        stable_sort(pa.begin(),pa.end(),comp);

        for(int i=0;i<k;i++)
        pa[i].pop_back();


         for(int i=0;i<k;i++)
             ans.push_back(pa[i][0]);
        return ans;
    }

    static bool comp(vector<int>a,vector<int>b)
    {
        return a[1]<b[1];
    }
};
