class Solution {
public:
    vector<string> cellsInRange(string s) {
        char l1=s[0];
        int r1=s[1];
        char l2=s[3];
        int r2=s[4];
        vector<string>ans;
        string ss="";
        for(char i=l1;i<=l2;i++)
        {
            for(char j=r1;j<=r2;j++)
            {
                ss=ss+i;
                ss=ss+j;
                ans.push_back(ss);
                ss="";
            }
        }
        return ans;
    }
};
