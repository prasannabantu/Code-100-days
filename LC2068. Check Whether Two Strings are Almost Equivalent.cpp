class Solution {
public:
bool checkAlmostEquivalent(string word1, string word2) {
        int acnt[26]={};
        int bcnt[26]={};
        for(auto c:word1) acnt[c-'a']++;
        for(auto c:word2) bcnt[c-'a']++;

        for(int i=0; i<26; i++)
        {
                if(abs(acnt[i]-bcnt[i])>3) return 0;
        }
        return 1;


        return 1;
}
};
