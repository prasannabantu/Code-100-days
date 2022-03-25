class Solution {
public:
    int numberOfMatches(int n) {
        int c=0; int f=0;
        while(n>1)
        {
            c+=(n+1)/2;
            n=n/2;
        }
        return c;
    }
};
