class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        int l=0; int r=n-1;
        for(int i=0;i<n-1;i++)
        {
            int ele=target-a[i];
            l=i+1; r=n-1;
            while(l<=r)
            {
                int m=l+(r-l)/2;
                if(a[m]==ele) return {i+1,m+1};
                if(a[m]>ele) r=m-1;
                else l=m+1;
            }
        }
        return {-1,-1};
    }
};


vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        int l=0; int r=n-1;
        while(l<r)
        {
                if(a[l]+a[r]==target) return {l+1,r+1};
                 if(a[l]+a[r]<target) l++;
                 else r--;
        }

        return {-1,-1};
    }
