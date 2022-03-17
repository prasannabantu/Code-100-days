LC1523 Count Odd Numbers in an Interval Range

class Solution {
public:
    int countOdds(int low, int high) {
        bool p=low&1;
        bool q=high&1;
        int ans=(high-low)/2;
        if(!(p|q))
            return ans;
        return ans+1;
    }
};
