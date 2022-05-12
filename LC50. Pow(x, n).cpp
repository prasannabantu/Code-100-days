class Solution {
public:
double bip(double x,long n)
{
        double ans=1;
        while(n)
        {

                if(n&1)
                {
                        ans*=x;
                }
                x*=x;

                // cout<<n<<" "<<ans<<"\n";
                n>>=1;

        }
        return ans;
}
double myPow(double x, long n) {
        bool b=0;
        bool p=0;
        if(x==0) return 0;
        if(n==0) return 1;
        if(x<0)
        {
                x*=-1;  b=1;
        }
        if(n<0)
        {
                n*=-1; p=1;
        }
        double ans=bip(x,n);
        if(b==1)
        {
                if(n%2==1) ans*=-1;
        }
        if(p==1)
        {
                ans=1/ans;
        }
        return ans;
}
};
