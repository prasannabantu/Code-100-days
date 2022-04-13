// 242. Valid Anagram

class Solution {
public:
bool isAnagram(string s, string t) {
        char a[26]={};
        char b[26]={};
        for(auto i:s)
                a[i-'a']++;
        for(auto i:t)
                b[i-'a']++;
        for(int i=0; i<26; i++)
                if(a[i]!=b[i]) return 0;
        return 1;
}
};
