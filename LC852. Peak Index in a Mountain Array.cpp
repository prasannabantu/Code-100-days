class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n=a.size();
        int mid;
        int l=0; int r=n-1;
        int ans;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(mid==0 ||(a[mid]>a[mid-1]))
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};
