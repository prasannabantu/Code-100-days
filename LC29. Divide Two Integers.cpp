class Solution {
public:
int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign=(dividend>0 == divisor>0);
        unsigned int a=abs(dividend);
        unsigned int b=abs(divisor);
        unsigned int sum=0;
        int q;
        while(a>=b)
        {
                q=0;
                while((b<<(q+1)) < a)
                {
                        q++;
                }
                a-=b<<q;
                sum+=1<<q;
        }
        if(sum==1<<31 && sign) return INT_MAX;
        return sign ? sum:-sum;

}
};
