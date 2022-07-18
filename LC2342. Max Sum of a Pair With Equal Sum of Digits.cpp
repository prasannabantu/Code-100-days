class Solution {
public:
int digSum(int n)
{
        int cnt=0;
        while(n)
        {
                cnt+=n%10;
                n/=10;
        }
        return cnt;
}

int maximumSum(vector<int>& nums) {
        int n=nums.size();
        long long maxSum=-1;
        vector<pair<int,int> >vp;
        for(int i=0; i<n; i++)
        {
                vp.push_back({digSum(nums[i]),nums[i]});
        }
        sort(vp.begin(),vp.end());

        for(int i=n-1; i>=1; i--)
        {
                if(vp[i].first==vp[i-1].first) maxSum=max(maxSum,(long long)(vp[i].second+vp[i-1].second));
        }
        return maxSum;
}
};
