class Solution {
public:
int countSegments(string s) {
        int i=0;
        s.push_back(' ');
        int n=s.size();
        int c=0;
        for(int i=0; i<n; i++)
        {
                if(s[i]==' ')
                {
                        if(i>=1 && s[i-1]!=' ') c++;
                }
        }
        return c;
}
};


class Solution {
public:
int countSegments(string s) {
        int i=0;
        int n=s.size();
        if(n==0) return 0;
        int j=n-1;
        int c=0;
        while(i<=n-1 && s[i]==' ') i++;
        while(j>=0 && s[j]==' ') j--;
        if(i>j) return 0;
        while(i<j)
        {
                if(i>=1 && s[i-1]!=' ' && s[i]==' ') c++;
                i++;
        }
        return c+1;
}
};
