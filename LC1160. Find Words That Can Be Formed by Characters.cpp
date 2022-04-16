class Solution {
public:
int countCharacters(vector<string>& words, string chars) {
        int cnt[26]={};
        int ans=0;
        for(auto i:chars)
                cnt[i-'a']++;
        for(auto word:words)
        {
                vector<int>wc(26,0);
                for(auto i:word)
                {
                        wc[i-'a']++;
                }

                bool f=1;
                for(int i=0; i<26; i++)
                {
                        if(cnt[i]<wc[i]) f=0;
                }
                wc={0};
                if(f==1)
                {
                        int n=word.size();
                        ans+=n;
                }

        }
        return ans;
}
};
