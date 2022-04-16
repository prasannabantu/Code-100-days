class Solution {
public:
bool canConstruct(string ransomNote, string magazine) {
        int rcnt[26]={};
        int mcnt[26]={};
        for(auto c:magazine) mcnt[c-'a']++;
        int n=ransomNote.size();
        for(int i=0; i<n; i++)
        {
                if(++rcnt[ransomNote[i]-'a']>mcnt[ransomNote[i]-'a']) return 0;
        }
        return 1;
}
};
