class Solution {
public:
int summ(int n)
{
        int ans=0;
        while(n)
        {
                ans+=((n%10)*(n%10));
                n/=10;
        }
        return ans;

}

bool isHappy(int n) {
        for(int i=0; i<300; i++)
        {
                if(summ(n)==1) return 1;
                n=summ(n);
        }
        return 0;
}
};
