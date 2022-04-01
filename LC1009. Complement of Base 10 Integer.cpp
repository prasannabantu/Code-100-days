class Solution {
public:
    int bitwiseComplement(int n) {
        int c=0;
        int ans=0;
        if(n==0) return 1;
        while(n)
        {
            int t=n&1;
            n=n>>1;
            ans=(ans<<1)+(!t);
            c++;
        }
        n=ans;
        ans=0;

        while(c--)
        {
             int t=n&1;
            n=n>>1; ans=(ans<<1)+(t);
        }
        return ans;
    }
};
