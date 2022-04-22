class Solution {
public:
int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size(); int c,ans=0;
        for(int i=0; i<n; i++)
        {
                c=ceil(((i+1)*(n-i))/2.0);
                ans+=c*arr[i];
        }
        return ans;
}
};
