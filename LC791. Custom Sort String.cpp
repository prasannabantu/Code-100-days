class Solution {
public:
string customSortString(string order, string s) {
        int acnt[26]={};
        for(auto c:s)
        {
                acnt[c-'a']++;
        }
        int n=s.size();
        int i=0;
        for(int j=0; j<order.size(); j++)
        {
                for(int k=0; k<acnt[order[j]-'a']; k++)
                        s[i++]=order[j];
                acnt[order[j]-'a']=0;
        }

        for(int j=0; j<26; j++)
        {
                for(int k=0; k<acnt[j]; k++)
                        s[i++]=(char)(j+'a');
        }
        return s;

}
};
