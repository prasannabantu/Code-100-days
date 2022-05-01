class Solution {
public:
bool isPowerOfTwo(int n) {
        if(n<1) return 0;
        return __builtin_popcount(n)==1 ? 1:0;
}
};
