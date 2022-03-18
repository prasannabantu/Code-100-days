// LC191 Number of 1 Bits




class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32>b(n);
        return b.count();
    }
};



class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n>0)
        {
            c+=n&1;
            n=n>>1;
        }
        return c;
    }
};


class Solution {
public:
    int hammingWeight(uint32_t n) {
       int c=0;
        while(n)
        {
            n=n&(n-1);
            c++;
        }
        return c;
    }
};


class Solution {
public:
    int hammingWeight(uint32_t n) {
       return __builtin_popcount(n);
    }
};
