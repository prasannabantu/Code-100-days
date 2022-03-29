class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=0;
        int n=word.size();
        for(int i=0;i<n;i++)
            if(ch==word[i]) { ind=i; break;}
        ind++;
        for(int i=0;i<ind/2;i++)
            swap(word[i],word[ind-i-1]);
        return word;
    }
};
