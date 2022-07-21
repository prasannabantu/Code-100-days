class Solution {
public:
int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<=1) return n;
        vector<int>mp(256,-1);
        int maxL=0;
        int start=-1;
        for(int i=0; i<n; i++)
        {
                if(mp[s[i]]>start)
                        start=mp[s[i]];
                mp[s[i]]=i;
                maxL=max(maxL,i-start);

        }
        return maxL;
}
};
