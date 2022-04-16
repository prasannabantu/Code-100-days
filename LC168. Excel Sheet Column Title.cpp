class Solution {
public:
string convertToTitle(int N) {
        string ans; int t=0;
        while(N)
        {
                N--;
                ans.push_back((char)(N%26+'A'));
                N/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;

}
};
