// 2284. Sender With Largest Word Count
class Solution {
public:
int wordCount(string &s)
{
        int c=0;
        for(auto ch:s)
                if(ch==' ') c++;
        return c+1;
}

static bool cmp(pair<string,int>a, pair<string,int>b)
{
        if(a.second==b.second)
        {
                return lexicographical_compare(a.first.begin(),a.first.end(),b.first.begin(),b.first.end());
        }
        return a.second<b.second;
}

string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>mp;
        int m=messages.size();
        for(int i=0; i<m; i++)
        {
                mp[senders[i]]=mp[senders[i]]+wordCount(messages[i]);
        }

        vector<pair<string,int> >v(mp.begin(),mp.end());

        sort(v.begin(),v.end(),cmp);

        return v[mp.size()-1].first;
}

};
