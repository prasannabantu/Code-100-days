class Solution {
public:
int averageValue(vector<int>& nums) {
        int sums=0;
        int cnt=0;

        for(int num:nums)
                if(num%6==0) {
                        sums+=num;
                        cnt++;
                }

        if(cnt==0) return 0;
        return sums/cnt;


}
};
