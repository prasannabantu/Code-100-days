class Solution {
public:
string reverseOnlyLetters(string s) {
        int n=s.size();
        int l=0; int r=n-1;
        while(l<r)
        {
                if(isalpha(s[l]))
                {
                        if(isalpha(s[r])) { swap(s[l],s[r]); l++; r--;}
                        else
                                r--;
                }
                else
                {
                        l++;
                }
        }
        return s;
}
};
