class Solution {
public:
bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n =s1.size();
        bool f1=1;
        for(int i=0; i<n; i++)
        {
                if(s1[i]<s2[i]) f1=0;
        }

        bool f2=1;
        for(int i=0; i<n; i++)
        {
                if(s2[i]<s1[i]) f2=0;
        }
        return f1|f2;
}
};

class Solution {
public:
bool checkIfCanBreak(string s1, string s2) {
        int acnt[26]={};
        int bcnt[26]={};
        int n=s1.size();
        bool f1=1,f2=1;
        for(int i=0; i<n; i++)
        {
                acnt[s1[i]-'a']++;
                bcnt[s2[i]-'a']++;
        }

        int sum1=0;
        int sum2=0;
        for(int i=0; i<26; i++)
        {
                sum1+=acnt[i];
                sum2+=bcnt[i];
                if(sum1>sum2) f1=0;
        }

        sum1=0;
        sum2=0;
        for(int i=0; i<26; i++)
        {
                sum1+=acnt[i];
                sum2+=bcnt[i];
                if(sum1<sum2) f2=0;
        }

        return f1|f2;

}
};
