class Solution {
public:
    int findComplement(int num) {
        int ans=0; int c=0;
        while(num)
        {
            bool t=num&1;
            num=num>>1; ans=(ans<<1)+(!t);
            c++;
        }
       // cout<<ans<<" ";

        num=ans;
        ans=0;

        while(c--)
        {
           bool t=num&1;
            num=num>>1; ans=(ans<<1)+(t);
        }
    //    cout<<ans<<" \n";
        return ans;
    }
};
