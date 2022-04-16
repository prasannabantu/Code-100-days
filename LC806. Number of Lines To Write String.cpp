class Solution {
public:
vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int>res(2,0);
        int n=s.size();
        int p=0;
        while(p<n)
        {
                int sum=0;
                while(p<n && sum+widths[s[p]-'a']<=100) sum+=widths[s[p++]-'a'];
                res[0]++;
                res[1]=sum;
        }
        return res;
}
};
