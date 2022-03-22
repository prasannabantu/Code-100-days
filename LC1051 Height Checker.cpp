// LC1051 Height Checker
class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>r;
        for(auto i:h) r.push_back(i);
        sort(r.begin(),r.end());
        int n=h.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(h[i]!=r[i]) c++;
        }
        return c;

    }
};
