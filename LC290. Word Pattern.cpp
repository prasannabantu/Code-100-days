class Solution {
public:
bool wordPattern(string pattern, string s)
{
        map<char,string>mp;
        map<string,char>mp2;
        vector<string>v;
        int n=s.size();
        stringstream st(s);
        string word;
        while(st>>word)
        {
                v.push_back(word);
        }

        int m=pattern.size();
        if(m!=v.size()) return 0;
        for(int i=0; i<m; i++)
        {
                auto k=mp.find(pattern[i]);
                if(k==mp.end())
                        mp[pattern[i]]=v[i];
                else
                {
                        if(k->second!=v[i]) return 0;
                }

                auto k2=mp2.find(v[i]);
                if(k2==mp2.end())
                {
                        mp2[v[i]]=pattern[i];
                }
                else
                {
                        if(k2->second!=pattern[i]) return 0;
                }
        }
        return 1;
}
};
