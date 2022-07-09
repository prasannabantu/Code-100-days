class Solution {
public:
int findJudge(int n, vector<vector<int> >& trust) {
        vector<int>tru(n+1,0);
        for(auto t:trust)
        {
                tru[t[0]]--;
                tru[t[1]]++;
        }
        for(int i=1; i<=n; i++)
                if(tru[i]==n-1) return i;
        return -1;
}
};
