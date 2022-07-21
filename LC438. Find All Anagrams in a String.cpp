class Solution {
public:
bool isEqual(vector<int>&a, vector<int>&b)
{
        for(int i=0; i<26; i++) if(a[i]!=b[i]) return 0;
        return 1;
}
vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int l=p.size();
        vector<int>res;
        if(n<l) return res;
        vector<int>scnt(26,0);
        vector<int>pcnt(26,0);
        for(auto c:p) pcnt[c-'a']++;
        for(int i=0; i<l; i++)
                scnt[s[i]-'a']++;
        if(isEqual(scnt,pcnt)) res.push_back(0);
        for(int i=l; i<n; i++)
        {
                scnt[s[i-l]-'a']--;
                scnt[s[i]-'a']++;
                if(isEqual(pcnt,scnt)) res.push_back(i-l+1);
        }
        return res;


}
};
