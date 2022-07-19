













//Third attempt
class Solution {
public:

void generate(string s,int open,int close,int n,vector<string>&res)
{
        if(open==close && open+close==2*n) {res.push_back(s); return;}
        if(close>open) return;
        if(open<=n)
        {
                generate(s+'(',open+1,close,n,res);
                if(close<open)
                        generate(s+')',open,close+1,n,res);
        }
}

vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate("",0,0,n,res);
        return res;
}
};








//Second attempt
class Solution {
public:

void generate(string s,int open,int close,int i,int n,vector<string>&res)
{
        if(i==2*n && open==close) {res.push_back(s); return;}
        if(close>open) return;
        if(open<=n)
        {
                generate(s+'(',open+1,close,i+1,n,res);
                if(close<open)
                        generate(s+')',open,close+1,i+1,n,res);
        }
}

vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate("",0,0,0,n,res);
        return res;
}
};











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
