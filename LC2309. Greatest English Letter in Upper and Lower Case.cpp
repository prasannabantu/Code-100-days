class Solution {
public:
string greatestLetter(string s) {
        int cnt[26]={};
        int acnt[26]={};
        for(auto c:s)
        {
                if(islower(c))
                {
                        cnt[c-'a']++;
                }
                else
                {
                        acnt[c-'A']++;
                }
        }

        int ans=-1;
        for(int i=0; i<26; i++)
        {
                if(cnt[i]>0 && acnt[i]>0)
                {
                        ans=i;
                }
        }
        string all="";
        if(ans!=-1)
                all+=(char)('A'+ans);
        return all;
}
};
