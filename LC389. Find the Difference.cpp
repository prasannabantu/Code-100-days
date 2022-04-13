// 389. Find the Difference
class Solution {
public:
char findTheDifference(string s, string t) {
        int a[26]={};
        // int b[26]={};
        for(auto i:s)
        {
                a[i-'a']++;
        }
        for(auto i:t)
        {
                a[i-'a']++;
        }

        for(int i=0; i<26; i++)
                if(a[i]%2==1) return (char)(i+'a');
        return 'a';

}
};
