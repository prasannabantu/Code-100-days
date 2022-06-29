class Solution {
public:
int countAsterisks(string s) {
        bool isIN=0;
        int n = s.size();
        int astc=0;
        int i=0;
        while(i<n && s[i]!='|')
        {
                if(s[i++]=='*') astc++;
        }
        if(i==n) return astc;

        int cnt=1;
        while(i<n)
        {
                if(s[i]=='*' && cnt%2==1) astc++;
                if(s[i]=='|') cnt++;
                i++;
        }
        return astc;


}
};
