class Solution {
public:
int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0; int j=n-1;
        int c=0;
        while(i<j)
        {
                int s=nums[i]+nums[j];
                if(s>k) j--;
                else
                if(s<k) i++;
                else {c++; i++; j--;}
        }
        return c;
}
};
