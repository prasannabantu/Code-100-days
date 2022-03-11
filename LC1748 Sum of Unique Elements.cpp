1748. Sum of Unique Elements


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(101,0);
        for(auto &i:nums)
            a[i]++;
        int count=0;
        for(int i=1;i<=100;i++)
            if(a[i]==1) count+=i;
        return count;
    }
};
