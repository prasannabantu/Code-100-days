//2006. Count Number of Pairs With Absolute Difference K

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(diff(nums[i],nums[j])==k) count++;

        return count;

    }
    int diff(int a,int b)
    {
        if(a>b) return a-b;
        return b-a;
    }

};
