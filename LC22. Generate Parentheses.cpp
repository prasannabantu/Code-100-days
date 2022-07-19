





























//Not a great solution since it is my first attempt
class Solution {
public:

void generate(string s,int open,int close,int i,int n,vector<string>&res)
{
        if(i==2*n && open==close) {res.push_back(s); return;}
        if(i==2*n) return;
        if(open<close) return;
        generate(s+'(',open+1,close,i+1,n,res);
        generate(s+')',open,close+1,i+1,n,res);
}

vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate("",0,0,0,n,res);
        return res;
}
};
