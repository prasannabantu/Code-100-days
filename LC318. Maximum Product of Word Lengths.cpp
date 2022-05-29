class Solution {
public:
int maxProduct(vector<string>& words) {
        bitset<26>bt;
        int n=words.size();
        vector<bitset<26> >vb(n);
        for(int i=0; i<n; i++)
        {
                for(auto c:words[i])
                        vb[i][c-'a']=1;
        }

        int maxii=0;
        for(int i=0; i<n-1; i++)
        {
                for(int j=i+1; j<=n-1; j++)
                {
                        if((vb[i]&vb[j]).to_ulong()) continue;
                        maxii=max(maxii,(int)words[i].size() * (int)words[j].size());
                }
        }
        return maxii;
}
};
