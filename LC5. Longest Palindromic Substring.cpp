class Solution {
public:
string longestPalindrome(string s) {
        int maxLen=0;
        int n=s.size();
        int mi=0; int mj=0;
        for(int i=0; i<n; i++)
        {
                int l=i-1; int r=i+1;
                int len=1;
                while(l>=0 && r<=n-1 && s[l]==s[r])
                {
                        len+=2;
                        l--; r++;
                }

                if(maxLen<len)
                {
                        maxLen=len;
                        mi=l+1;
                        mj=r-1;
                }

                len=0;
                l=i; r=i+1;
                while(l>=0 && r<=n-1 && s[l]==s[r])
                {
                        len+=2;
                        l--; r++;
                }

                if(maxLen<len)
                {
                        maxLen=len;
                        mi=l+1;
                        mj=r-1;
                }

        }
        return s.substr(mi,mj-mi+1);
}

};
