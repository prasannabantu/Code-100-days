// LC2108 Find First Palindromic String in the Array
class Solution {
public:
    bool ispalindrome(string s)
    {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]) return 0;

        }
          return 1;
    }
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(auto i:words)
            if(ispalindrome(i)) { ans=i; break;}
        return ans;
    }
};
