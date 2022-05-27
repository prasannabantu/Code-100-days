class Solution {
public:
vector<string> commonChars(vector<string>& words) {
        int cnt[26]={};
        for(auto c:words[0])
                cnt[c-'a']++;
        int n=words.size();
        for(int i=1; i<n; i++)
        {
                vector<int>tcnt(26,0);
                for(auto c:words[i])
                        tcnt[c-'a']++;
                for(int j=0; j<26; j++)
                        cnt[j]=min(cnt[j],tcnt[j]);

        }

        vector<string> ans;
        for(int i=0; i<26; i++)
        {
                for(int j=0; j<cnt[i]; j++)
                {
                        string t="";
                        t+=(char)(i+'a');
                        ans.push_back(t);
                }
        }
        return ans;

}
};
