class Solution {
public:
vector<string> findOcurrences(string text, string first, string second) {
        vector<string> v;
        stringstream ss(text);
        string word;
        string prev1="";
        string prev2="";
        while(ss>>word)
        {
                if(prev2==first && prev1 == second)
                        v.push_back(word);
                prev2=prev1;
                prev1=word;
        }
        return v;
}
};
