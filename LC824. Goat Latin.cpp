class Solution {
public:
bool isVowel(char ch)
{
        char c=tolower(ch);
        if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u') return 1;
        return 0;
}
string toGoatLatin(string sentence) {
        string ans = "";
        stringstream ss(sentence);
        string word;
        int ind=1;
        while(ss>>word)
        {
                if(isVowel(word[0]))
                {
                        ans+=word;
                        ans+="ma";
                        for(int i=0; i<ind; i++)
                                ans+='a';
                }
                else
                {
                        rotate(word.begin(),word.begin()+1,word.end());
                        ans+=word;
                        ans+="ma";
                        for(int i=0; i<ind; i++)
                                ans+='a';
                }
                ans+=" ";
                ind++;
        }
        ans.pop_back();
        return ans;

}
};
