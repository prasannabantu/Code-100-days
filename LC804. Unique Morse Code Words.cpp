class Solution {
public:
int uniqueMorseRepresentations(vector<string>& words) {
        set<string>se;
        vector<string>v={".-","-...","-.-.","-..",".","..-.",
                         "--.","....","..",".---","-.-",".-..",
                         "--","-.","---",".--.","--.-",".-.","...",
                         "-","..-","...-",".--","-..-","-.--","--.."};
        for(auto word:words)
        {
                string s="";
                for(auto c:word)
                {
                        s+=v[c-'a'];
                }
                se.insert(s);
        }
        return se.size();
}
};
