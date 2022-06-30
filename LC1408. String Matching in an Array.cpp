class Solution {
public:
vector<string> stringMatching(vector<string>& words) {
        set<string>ans;
        int n= words.size();
        for(int i=0; i<n-1; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        if(words[j].find(words[i])!=string::npos)
                        {
                                ans.insert(words[i]);
                        }
                        if(words[i].find(words[j])!=string::npos)
                        {
                                ans.insert(words[j]);
                        }
                }
        }

        vector<string>res;
        for(auto s:ans)
                res.push_back(s);
        return res;
}
};
