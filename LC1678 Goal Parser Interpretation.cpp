//LC1678 Goal Parser Interpretation


class Solution {
public:
    string interpret(string c) {
        string ans="";
        int n=c.size();
        for(int i=0;i<n;i++)
        {
            if(c[i]=='G') ans.push_back('G');
            if(c[i]=='(')
            {
                if(c[i+1]==')')
                {
                    ans.push_back('o'); i++;
                }
                else
                {
                    ans.push_back('a');
                    ans.push_back('l');
                    i+=3;
                }
            }
        }
        return ans;
    }
};
