class Solution {
public:
int titleToNumber(string T) {
        int res=0; int c=0;
        int n=T.size()-1;
        for(auto i:T)
        {
                res+=(i-'A'+1)*(int)(pow(26,n--));
        }
        return res;
}
};
