class Solution {
public:
bool isPrime(int n)
{
        // Corner case
        if (n <= 1)
                return false;

        // Check from 2 to square root of n
        for (int i = 2; i*i <= (n); i++)
                if (n % i == 0)
                        return false;

        return true;
}

bool isThree(int n) {
        if(n==1) return 0;
        int k=sqrt(n);
        if(k*k==n && isPrime(k)) return 1;
        return 0;
}
};
