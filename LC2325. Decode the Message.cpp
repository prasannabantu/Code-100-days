class Solution {
public:
string decodeMessage(string key, string message) {
        map<char,char>mp;
        int i=0;
        for(auto c:key)
        {
                if(c!=' ')
                {
                        if(mp.find(c)==mp.end())
                        {
                                mp[c]=(char)((i++)+'a');
                                if(i==26) break;
                        }
                }
        }
        string ans;
        for(auto c:message)
        {
                if(c!=' ')
                        ans+=mp[c];
                else ans+=' ';
        }
        return ans;
}
};
