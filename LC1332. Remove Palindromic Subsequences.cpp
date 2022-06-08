class Solution {
public:

bool isPal(string s)
{
        int n=s.size();
        for(int i=0; i<n/2; i++)
                if(s[i]!=s[n-i-1])
                        return 0;
        return 1;
}

int removePalindromeSub(string s) {
        if(s.empty()) return 0;
        if(isPal(s)) return 1;
        return 2;

}
};
