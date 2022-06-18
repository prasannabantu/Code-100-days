class Solution {
public:
bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();

        int i=0; int j=0;

        while(i<m && j<n)
        {
                if(s[i]==t[j]) {i++; j++;}
                else j++;
        }
        if(i>=m) return 1;
        return 0;
}
};

class Solution {
public:
bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n==0) return 1;
        int j=0;
        for(int i=0; i<m; i++)
        {
                if(j<n && t[i]==s[j])
                {
                        j++;
                }
                if(j==n) return 1;
        }

        return 0;
}
};
