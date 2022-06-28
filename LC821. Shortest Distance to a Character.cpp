class Solution {
public:
vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>res;

        for(int i=0; i<n; i++)
        {
                if(s[i]==c)
                {
                        res.push_back(0);
                        continue;
                }
                int l=i; int r=i;
                while(l>=0 && s[l]!=c)
                {
                        l--;
                }
                while(r<=n-1 && s[r]!=c)
                {
                        r++;
                }
                if(l==-1) res.push_back(r-i);
                else if(r==n) res.push_back(i-l);
                else
                        res.push_back(min(i-l,r-i));
        }
        return res;


}
};
