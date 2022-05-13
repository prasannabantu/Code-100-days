// 598. Range Addition II
class Solution {
public:
int maxCount(int m, int n, vector<vector<int> >& ops) {
        int mini1=m;
        int mini2=n;
        for(auto a:ops)
        {
                mini1=min(mini1,a[0]);
                mini2=min(mini2,a[1]);
        }
        return mini1*mini2;

}
};
