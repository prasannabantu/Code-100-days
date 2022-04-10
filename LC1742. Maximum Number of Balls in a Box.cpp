class Solution {
public:
    int ncount(int n)
    {
        int ans=0;
        while(n)
        {
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int countBalls(int lowLimit, int highLimit) {
        int a[100]={};
        for(int i=lowLimit;i<=highLimit;i++)
        {
            a[ncount(i)]++;
        }

        int maxii=1;
        for(int i=0;i<37;i++)
        {
            maxii=max(maxii,a[i]);
        }
        return maxii;
    }
};
