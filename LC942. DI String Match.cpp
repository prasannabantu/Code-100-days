class Solution {
public:
vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int>ans;
        int b=0;
        int e=n;
        for(int i=0; i<n; i++)
        {
                if(s[i]=='I')
                {
                        ans.push_back(b++);
                }
                else
                {
                        ans.push_back(e--);
                }
        }
        ans.push_back(b);
        // cout<<b<<" "<<e<<"\n";
        return ans;
}
};
