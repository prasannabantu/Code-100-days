class Solution {
public:
int dsum(int n)
{
        int ans=0;
        while(n)
        {
                ans+=n%10; n/=10;
        }
        return ans;
}
int getLucky(string s, int k) {
        int n=0;
        for(auto c:s)
        {
                n+=dsum(c-'a'+1);
        }
        for(int i=1; i<k; i++)
                n=dsum(n);
        return n;

}
};
