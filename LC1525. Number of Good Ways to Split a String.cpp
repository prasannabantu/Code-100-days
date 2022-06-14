class Solution {
public:
int numSplits(string s) {
        int n = s.size();
        vector<int>l(n);
        vector<int>r(n);
        set<char>temp1;
        set<char>temp2;
        for(int i=0; i<n; i++)
        {
                temp1.insert(s[i]);
                l[i]=temp1.size();

                temp2.insert(s[n-1-i]);
                r[n-1-i]=temp2.size();
        }

        int cnt=0;
        for(int i=0; i<n-1; i++)
        {
                if(l[i]==r[i+1]) cnt++;
        }

        return cnt;

}
};
