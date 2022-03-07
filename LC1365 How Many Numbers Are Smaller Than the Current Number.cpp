//1365. How Many Numbers Are Smaller Than the Current Number

// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
// That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
// Return the answer in an array.



class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(101,0);
        for(int i=0;i<n;i++)
            a[nums[i]]++;

        for(int i=1;i<=100;i++)
            a[i]=a[i]+a[i-1];

        vector<int>cu(n,0);

        for(int i=0;i<n;i++)
            if(nums[i]!=0)
            cu[i]=a[nums[i]-1];
        return cu;

    }
};
