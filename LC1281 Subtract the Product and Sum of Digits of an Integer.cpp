//1281. Subtract the Product and Sum of Digits of an Integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n!=0)
        {
            int m=n%10;
            sum+=m;
            product*=m;
            n/=10;
        }
         return product-sum;
    }
};
