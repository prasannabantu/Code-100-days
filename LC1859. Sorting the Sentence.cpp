class Solution {
public:
string sortSentence(string s) {
        stringstream ss(s);
        map<int,string>mp;
        string word;
        while(ss>>word)
        {
                int n=word.size();
                mp[word[n-1]-'0']=word.substr(0,n-1);
        }
        string ans="";
        for(auto m:mp)
        {
                ans+=m.second;
                ans+=' ';
        }
        ans.pop_back();
        return ans;
}
};
