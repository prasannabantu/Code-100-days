
//LC1822 Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
       int pro=1;
        for(auto i:nums)
        {
            if(i==0) return 0;
            pro*=abs(i)/i;
        }
        return pro;
    }
};
