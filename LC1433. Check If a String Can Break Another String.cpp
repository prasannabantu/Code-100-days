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
