class Solution {
public:
int equalPairs(vector<vector<int> >& g) {
        int n=g.size();
        int cnt=0;

        for(int i=0; i<n; i++)
        {

                for(int j=0; j<n; j++)
                {
                        int isSame=1;
                        for(int k=0; k<n; k++)
                        {
                                if(g[i][k]!=g[k][j]) isSame=0;
                        }
                        if(isSame) cnt++;
                }
        }


        return cnt;
}
};
