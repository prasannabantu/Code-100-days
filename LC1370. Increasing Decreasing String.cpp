class Solution {
public:
string sortString(string s) {
        int n=s.size();
        int cnt[26]={};

        for(auto i:s)
        {
                cnt[i-'a']++;
        }

        int c=0;
        string ans="";
        while(c<n)
        {
                for(int i=0; i<26; i++)
                {
                        if(cnt[i]>0)
                        {
                                ans.push_back((char)i+'a');
                                cnt[i]--;
                                c++;
                        }
                }

                for(int i=25; i>=0; i--)
                {
                        if(cnt[i]>0)
                        {
                                ans.push_back((char)i+'a');
                                cnt[i]--;
                                c++;
                        }
                }
        }


        return ans;
}
};
