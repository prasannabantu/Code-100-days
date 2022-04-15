class Solution {
public:
bool isPowerOfThree(int n) {
        if(n<1) return 0;
        if(n==1) return 1;
        while(n%3==0)
        {
                n/=3;
        }
        if(n==1) return true;
        return 0;
}
};
