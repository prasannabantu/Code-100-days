class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0; int poi=0;
        int n=s.size();
        int j=n-1;
        while(j>0 && s[j]==' ') j--; cout<<j<<" ";
        i=j;
        while(i>=0 && s[i]!=' ') i--;
        return j-i;
    }
};
