class Solution {
public:
bool areAlmostEqual(string s1, string s2) {
        vector<int>di; int n=s1.size();
        int d=0;
        for(int i=0; i<n; i++)
        {
                if(s1[i]!=s2[i])
                {
                        di.push_back(i);
                }
        }
        if(di.size()==2)
                swap(s1[di[0]],s1[di[1]]);
        if(s1==s2) return 1;
        return 0;
}
};
