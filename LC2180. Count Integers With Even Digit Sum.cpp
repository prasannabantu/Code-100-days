class Solution {
public:
int dsum(int n)
{
        int res=0;
        while(n)
        {
                res+=n%10;
                n/=10;
        }
        return res;
}
int countEven(int num) {
        int c=0;
        for(int i=1; i<=num; i++)
        {
                if(dsum(i)%2==0) c++;
        }
        return c;
}
};
