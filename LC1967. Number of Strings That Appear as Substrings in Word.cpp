class Solution {
public:
int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(auto p:patterns)
        {
                if(word.find(p)!=string::npos)
                        c++;
        }
        return c;
}
};
