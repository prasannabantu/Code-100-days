class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ') cnt++;
            if(cnt==k) return s.substr(0,i);
        }
        return s;
    }
};
