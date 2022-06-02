class Solution {
public:
int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(auto s:words)
        {
                if(s.find(pref)==0) c++;
        }
        return c;
}
};
