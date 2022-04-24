class Solution {
public:
bool areOccurrencesEqual(string s) {
        int cnt[26]={};
        set<int>se;
        for(auto c:s)
                cnt[c-'a']++;
        for(int i=0; i<26; i++)
        {
                if(cnt[i]!=0) se.insert(cnt[i]);
        }
        if(se.size()==1) return 1;
        return 0;
}
};
