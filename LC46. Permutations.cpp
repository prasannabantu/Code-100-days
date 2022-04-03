class Solution {
public:
    int ntimes(int n)
    {
        int ans=1;
        for(int i=n;i>=2;i--)
            ans*=i;
        return ans;
    }
    vector<vector<int>> permute(vector<int>& a) {
        vector<vector<int>>ans;
        int n=a.size();
        int times=ntimes(n);
        while(times--)
        {
        int k,l;

        //Finding the pivot
        for(k=n-2;k>=0;k--)
            if(a[k]<a[k+1]) break;
        if(k<0) reverse(a.begin(),a.end());
        else
        {
            for(l=n-1;l>k;l--)
                if(a[l]>a[k]) break;
            swap(a[l],a[k]);
            reverse(a.begin()+k+1,a.end());
        }
        ans.push_back(a);
        }
        return ans;
    }
};
