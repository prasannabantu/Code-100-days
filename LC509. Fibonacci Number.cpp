class Solution {
public:
int fib(int n) {
        if(n<=1) return n;
        int prev=1; int pre=1;
        for(int i=2; i<n; i++)
        {
                int k=pre;
                pre=pre+prev;
                prev=k;

        }
        return pre;
}
};
