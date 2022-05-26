class Solution {
public:
const unsigned long M = 1E9+7;
bool isPrime(int n)
{
        // Corner case
        if (n <= 1)
                return false;

        // Check from 2 to square root of n
        for (int i = 2; i <= sqrt(n); i++)
                if (n % i == 0)
                        return false;

        return true;
}

long fact(int n)
{
        int ans=1;
        for(int i=1; i<=n; i++)
                ans= (ans%M * i % M) % M;
        return ans;
}

int numPrimeArrangements(int n) {
        int pcount=0;
        int ccount=0;
        for(int i=1; i<=n; i++)
        {
                if(isPrime(i)) pcount++;
        }
        ccount=n-pcount;
        int na=0;
        return ((fact(pcount)%M) * (fact(ccount))%M)%M;

}
};
