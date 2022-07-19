class Solution {
public:

void combine(string s,int i,int n,vector<string>&res)
{
        if(i>=n)
        {
                res.push_back(s);
                return;
        }
        if(!isalpha(s[i])) { combine(s,i+1,n,res); return; }
        combine(s,i+1,n,res);
        s[i]^=' ';
        combine(s,i+1,n,res);
}

vector<string> letterCasePermutation(string s) {
        vector<string>res;
        int n=s.size();
        combine(s,0,n,res);
        return res;

}
};
