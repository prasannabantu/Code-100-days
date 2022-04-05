class Solution {
public:
    long long numberOfWays(string s) {
        long long ans=0;
        int n=s.size();
        vector<int> lzero(n,0);
        vector<int> lone(n,0);
        vector<int> rzero(n,0);
        vector<int> rone(n,0);
        int z=0; int o=0;
        for(int i=0;i<n;i++)
        {
            z+=(s[i]=='0');
            o+=(s[i]=='1');
            lzero[i]=z;
            lone[i]=o;
        }

        z=0; o=0;
        for(int i=n-1;i>0;i--)
        {
            z+=(s[i]=='0');
            o+=(s[i]=='1');
            rzero[i]=z;
            rone[i]=o;
        }

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') ans+=lone[i]*rone[i];
            else ans+=rzero[i]*lzero[i];
        }
        return ans;
    }
};
