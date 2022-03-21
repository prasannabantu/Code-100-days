LC1486 XOR Operation in an Array

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start; int i=start+2; int c=1;
        while(c<n)
        {
            ans^=i; i+=2;
            c++;
        }
        return ans;
    }
};
