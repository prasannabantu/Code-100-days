// 944. Delete Columns to Make Sorted
class Solution {
public:
int minDeletionSize(vector<string>& strs) {
        set<int>se;
        int n=strs.size();
        int l=strs[0].size();
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<l; j++)
                {
                        if(i+1<n && strs[i][j]>strs[i+1][j]) se.insert(j);
                }
        }
        return se.size();
}
};
