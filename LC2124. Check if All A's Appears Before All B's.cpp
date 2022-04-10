class Solution {
public:
    bool checkString(string s) {
       int n=s.size();
        bool aa=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='b') aa=1;
           if(aa==1 && s[i]=='a') return 0;

       }
        return 1;
    }
};
