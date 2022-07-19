class Solution {
public:
vector<string>v;

void combine(string &digits,string s,int i,int n,vector<string>&res)
{
        if(i>=n) { res.push_back(s); return;}
        for(auto c:v[digits[i]-'0'])
        {
                combine(digits,s+c,i+1,n,res);
        }
}

vector<string> letterCombinations(string digits) {
        vector<string>res;
        int n=digits.size();
        if(n==0) return res;
        v.push_back("-");
        v.push_back("-");
        v.push_back("abc"); v.push_back("def"); v.push_back("ghi");
        v.push_back("jkl"); v.push_back("mno"); v.push_back("pqrs");
        v.push_back("tuv"); v.push_back("wxyz");


        combine(digits,"",0,n,res);
        return res;

}
};
