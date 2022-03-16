// LC1689 Partitioning Into Minimum Number Of Deci-Binary Numbers
class Solution {
public:
    int minPartitions(string n) {
        char c='0';
        for(auto i:n) c=max(c,i);
        return c-'0';
    }
};
