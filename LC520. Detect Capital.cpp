class Solution {
public:
bool detectCapitalUse(string word) {
        bool f1=1;
        bool f2=1;
        bool f3=1;
        f3 = (isupper(word[0]));
        int n=word.size();
        for(int i=1; i<n; i++)
        {
                if(islower(word[i])) f1=0;
                if(isupper(word[i])) f2=0;
        }

        return (f2 && f3) || (f1 && f3) || (!f3 && f2);

}
};
