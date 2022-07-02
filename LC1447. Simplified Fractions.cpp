class Solution {
public:
vector<string> simplifiedFractions(int n) {
        set<string>res;
        for(int i=1; i<=n-1; i++)
        {
                for(int j=i+1; j<=n; j++)
                {
                        int k=__gcd(i,j);
                        res.insert(to_string((i/k))+'/'+to_string(j/k));
                }
        }
        vector<string>ans;
        for(auto s:res)
                ans.push_back(s);
        return ans;
}
};
