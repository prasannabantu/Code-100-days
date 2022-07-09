// 557. Reverse Words in a String III
class Solution {
public:
string reverseWords(string s) {
        int n=s.size();
        if(n==1) return s;
        string ans="";
        int i=0; int j=1;
        while(j<n)
        {
                while(j<=n-1 && s[j]!=' ') { cout<<j<<" "; j++; }
                for(int p=j-1; p>=i; p--)
                        ans.push_back(s[p]);
                ans.push_back(' ');
                i=j+1; j++;
        }
        ans.pop_back();
        return ans;


}
};

class Solution {
public:
string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string res;
        while(ss>>word)
        {
                reverse(word.begin(),word.end());
                res+=word;
                res+=" ";
        }
        res.pop_back();
        return res;


}
};
