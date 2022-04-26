class Solution {
public:
bool isPalindrome(string s) {
        int n=s.size();
        int l=0; int r=n-1;
        while(l<r)
        {
                if(!isalnum(s[l]))
                        l++;
                if(!isalnum(s[r]))
                        r--;
                if(isalnum(s[l]) && isalnum(s[r]))
                {
                        if(tolower(s[l])!=tolower(s[r]))
                                return 0;
                        else
                        {
                                l++;
                                r--;
                        }
                }
        }
        return 1;
}
};
