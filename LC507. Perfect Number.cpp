class Solution {
public:
bool checkPerfectNumber(int num) {
        if(num==1) return 0;
        int c=1; int t=(int)sqrt(num);
        for(int i=2; i<=t; i++)
        {
                if(num%i==0)
                {
                        if(i==num/i) c+=i;
                        else
                                c+=(i+num/i);
                }
        }
        return c==num;
}
};
