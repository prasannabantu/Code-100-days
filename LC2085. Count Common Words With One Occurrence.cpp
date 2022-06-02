class Solution {
public:
int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        for(auto w:words1)
        {
                mp1[w]++;
        }

        unordered_map<string,int>mp2;
        for(auto w:words2)
        {
                mp2[w]++;
        }

        int c=0;
        std::unordered_map<string,int>::iterator it;

        for(it=mp1.begin(); it!=mp1.end(); it++)
        {
                if(it->second==1)
                {
                        if(mp2[it->first]==1) c++;
                }
        }
        return c;

}
};
