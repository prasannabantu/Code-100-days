class Solution {
public:
char conv(int n)
{
        char c='a'+(n-1);
        return c;
}
string freqAlphabets(string s) {
        int n=s.size();
        string ans="";
        int i=0; int t;
        while(i<n)
        {
                if(i+2<n && s[i+2]=='#')
                {
                        t=(s[i]-'0')*10+(s[i+1]-'0');
                        ans.push_back(conv(t));
                        i=i+3; continue;
                }
                else
                {
                        ans.push_back(conv(s[i]-'0'));
                }
                i++;
        }
        return ans;
}

};
