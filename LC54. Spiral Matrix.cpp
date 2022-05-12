class Solution {
public:
vector<int> spiralOrder(vector<vector<int> >& a) {
        int m=a.size();
        int n=a[0].size();
        vector<int>ans;
        int up,left,down,right;
        left=0; right=n-1;
        up=0; down=m-1;

        while(up<=down && left<=right)
        {
                for(int j=left; j<=right; j++)
                {
                        ans.push_back(a[up][j]);
                }
                up++;
                if(up>down) break;

                for(int i=up; i<=down; i++)
                {
                        ans.push_back(a[i][right]);
                }
                right--;
                if(left>right) break;
                for(int j=right; j>=left; j--)
                {
                        ans.push_back(a[down][j]);
                }
                down--;
                if(up>down) break;
                for(int i=down; i>=up; i--)
                {
                        ans.push_back(a[i][left]);
                }
                left++;
                if(left>right) break;

        }
        return ans;
}
};
