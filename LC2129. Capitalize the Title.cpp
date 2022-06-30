class Solution {
public:
string capitalizeTitle(string title) {
        stringstream ss(title);
        string res;
        string word;
        while(ss>>word)
        {
                transform(word.begin(), word.end(), word.begin(), ::tolower);
                if(word.size()>2)
                        word[0]=toupper(word[0]);
                res+=word;
                res+=" ";
        }
        res.pop_back();
        return res;
}
};
