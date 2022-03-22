// LC1374 Generate a String With Characters That Have Odd Counts
class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n&1)
        {
            while(n--) ans.push_back('a');
        }
        else
        {   --n;
            while(n--) ans.push_back('a');
            ans.push_back('b');
        }
        return ans;
    }
};
