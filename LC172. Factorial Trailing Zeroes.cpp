class Solution {
public:
int trailingZeroes(int n) {
        int s=0;
        int i=5;
        while(n>=i)
        {
                s+=n/i;
                i*=5;
        }
        return s;
}
};
