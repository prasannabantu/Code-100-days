class Solution {
public:
vector<int> partitionLabels(string s) {
        int n=s.size();
        int a[26];
        for(int i=0; i<n; i++)
                a[s[i]-'a']=i;
        int prev=-1;
        int maxi=0;
        vector<int>res;
        for(int i=0; i<n; i++)
        {
                maxi=max(maxi,a[s[i]-'a']);
                if(maxi==i)
                {
                        res.push_back(maxi-prev);
                        prev=maxi;
                }
        }
        return res;
}
};
