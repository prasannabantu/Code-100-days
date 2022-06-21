// 1935. Maximum Number of Words You Can Type
class Solution {
public:
int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0;
        stringstream s(text);
        string word;
        while(s>>word)
        {
                int f=1;
                for(auto c:word)
                {
                        if(brokenLetters.find(c)!=string::npos) f=0;
                }
                cnt+=f;
        }
        return cnt;

}
};


class Solution {
public:
int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0;
        stringstream s(text);
        string word;
        bitset<26>cnt;
        for(auto c:brokenLetters)
        {
                cnt[c-'a']=1;
        }
        while(s>>word)
        {
                int f=1;
                for(auto c:word)
                {
                        if(cnt[c-'a']) f=0;
                }
                cnt+=f;
        }
        return cnt;

}
};
