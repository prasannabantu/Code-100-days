// 2287. Rearrange Characters to Make Target String
class Solution {
public:
int rearrangeCharacters(string s, string target) {
        int cnt[26]={};
        for(auto c:target)
        {
                cnt[c-'a']++;
        }

        int ecnt[26]={};
        for(auto c:s)
        {
                ecnt[c-'a']++;
        }

        int mini=INT_MAX;

        for(int i=0; i<26; i++)
        {
                if(cnt[i]!=0)
                {
                        if(ecnt[i]>=cnt[i])
                                mini=min(mini,ecnt[i]/cnt[i]);
                        else return 0;
                }
        }
        return mini;

}
};
