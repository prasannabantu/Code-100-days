class Solution {
public:
string convert(string s, int n)
{
        if(n==1) return s;
        int steps=s.size();
        int k=min(n,steps);
        vector<string> str1(k);

        bool gp=0;
        int i=0;

        for(auto c:s)
        {
                str1[i]+=c;
                if(i==0 || i==n-1 ) gp=!gp;
                i+= gp ? 1:-1;
        }

        string ans;
        for(auto c:str1) ans+=c;
        return ans;


}
};
