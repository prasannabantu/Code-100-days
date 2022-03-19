
//LC509 Fibonacci Number
class Solution {
public:
    int f[31];


    int fib(int n) {
        f[0]=0;
        f[1]=1;
        setf(n);
        return f[n];
    }

    void setf(int n)
    {
        for(int i=2;i<=n;i++)
            f[i]=f[i-1]+f[i-2];
    }
};
