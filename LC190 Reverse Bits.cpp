//LC190 Reverse Bits

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0; bool c=0;
        for(int i=1;i<=32;i++)
        {
            c=n&1; n=n>>1;
            ans=ans<<1; ans+=c;
        }
        return ans;
    }
};
