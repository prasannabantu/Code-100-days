class Solution {
public:
int longestPalindrome(string s) {
        int cnt[26]={};
        int bcnt[26]={};
        for(auto &c:s)
        {
                if(islower(c))
                        cnt[c-'a']++;
                else
                        bcnt[c-'A']++;
        }
        int ec=0;
        int omax=0;
        for(int i=0; i<26; i++)
        {
                if(cnt[i]%2==0)
                        ec+=cnt[i];
                else
                {
                        ec+=cnt[i]-1;
                        omax=max(omax,cnt[i]);
                }

                if(bcnt[i]%2==0)
                        ec+=bcnt[i];
                else
                {
                        ec+=bcnt[i]-1;
                        omax=max(omax,bcnt[i]);
                }


        }
        if(omax>0) return ec+1;
        return ec;

}
};
