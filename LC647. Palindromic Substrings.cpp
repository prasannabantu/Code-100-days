
//Possible TLE
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



//Like two pointer
class Solution {
public:


int countSubstrings(string s) {
        int n=s.size();
        int cnt=s.size();
        for(int i=0; i<n; i++)
        {
                int l=i-1; int r=i+1;
                while(l>=0 && r<=n-1)
                {
                        if(s[l]==s[r]) cnt++;
                        else break;
                        l--;
                        r++;
                }

                l=i; r=i+1;

                while(l>=0 && r<=n-1)
                {
                        if(s[l]==s[r]) cnt++;
                        else break;
                        l--;
                        r++;
                }

        }
        return cnt;
}
};
