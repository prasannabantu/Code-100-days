class Solution {
public:
bool isIsomorphic(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m!=n) return 0;
        map<char,char>mp1;
        map<char,char>mp2;

        for(int i=0; i<n; i++)
        {
                auto f1=mp1.find(s[i]);
                if(f1==mp1.end()) mp1[s[i]]=t[i];
                else
                {
                        if(mp1[s[i]]!=t[i]) return 0;
                }

                auto f2=mp2.find(t[i]);
                if(f2==mp2.end()) mp2[t[i]]=s[i];
                else
                {
                        if(mp2[t[i]]!=s[i]) return 0;
                }
        }



        return 1;

}
};
