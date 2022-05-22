class Solution {
public:
bool isPalindrome(string &s,int beg,int end)
{
        while(beg<end)
        {
                if(s[beg]!=s[end]) return 0;
                beg++;
                end--;
        }
        return 1;
}

int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0; i<n; i++)
        {
                for(int j=i; j<=n-1; j++)
                {
                        if(isPalindrome(s,i,j))
                        {
                                // cout<<i<<" "<<j<<"\n";
                                cnt++;
                        }
                }
        }
        return cnt;
}
};
