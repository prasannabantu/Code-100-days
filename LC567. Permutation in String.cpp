class Solution {
public:
bool cmp(int a[],int b[])
{
        for(int i=0; i<26; i++)
                if(a[i]!=b[i]) return 0;
        return 1;
}

bool checkInclusion(string s1, string s2) {
        int acnt[26]={};
        int bcnt[26]={};
        int m=s1.size();
        int n=s2.size();
        if(m>n) return 0;
        for(auto c:s1) acnt[c-'a']++;
        for(int i=0; i<m; i++)
                bcnt[s2[i]-'a']++;
        if(cmp(acnt,bcnt)) return 1;
        for(int i=m; i<n; i++)
        {
                bcnt[s2[i-m]-'a']--;
                bcnt[s2[i]-'a']++;
                if(cmp(acnt,bcnt)) return 1;
        }
        return 0;
}
};
