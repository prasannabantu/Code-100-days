class Solution {
public:
bool makeEqual(vector<string>& words) {
        int n=words.size();
        int cnt[26]={};
        for(auto word:words)
        {
                for(auto c:word)
                {
                        cnt[c-'a']++;
                }
        }
        for(int i=0; i<26; i++)
        {
                if(cnt[i]%n!=0) return 0;
        }
        return 1;
}
};
