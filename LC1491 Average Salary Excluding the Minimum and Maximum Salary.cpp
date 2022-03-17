// LC1491 Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int sum=0;
        for(auto i:salary)
        {
            sum+=i;
            mini=min(mini,i);
            maxi=max(maxi,i);
        }

        return ((double)(sum-mini-maxi))/(n-2);
    }
};
