
//Using only one vector
int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>l=nums;
        int sum=nums[0];
        for(int i=1; i<n; i++)
        {
                l[i]+=l[i-1];
                sum+=nums[i];
        }


        for(int i=0; i<n; i++)
        {
                if(l[i]-(sum-l[i]+nums[i])==0) return i;
        }
        return -1;
}

//Using two vectors
class Solution {
public:
int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>l=nums;
        vector<int>r=nums;
        for(int i=1; i<n; i++)
                l[i]+=l[i-1];
        for(int i=n-2; i>=0; i--)
                r[i]+=r[i+1];

        for(int i=0; i<n; i++)
        {
                if(l[i]-r[i]==0) return i;
        }
        return -1;
}
};


//Using no extra space

class Solution {
public:
int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>l=nums;
        int rsum=accumulate(nums.begin(),nums.end(),0);
        int lsum=0;

        for(int i=0; i<n; i++)
        {
                rsum-=nums[i];
                if(lsum==rsum) return i;
                else
                {
                        lsum+=nums[i];
                }
        }
        return -1;
}
};

class Solution {
public:
int pivotIndex(vector<int>& nums) {
        vector<long>v;
        for(auto i:nums)
                v.push_back(i);
        partial_sum(v.begin(),v.end(),v.begin());

        int n=nums.size();
        long sum=v[n-1];
//         for(int i=0;i<n;i++)
//         {
//             cout<<v[i]<<" ";
//         }
//         cout<<"\n";
//         for(int i=0;i<n;i++)
//         {
//             cout<<sum-v[i]<<" ";
//         }

        for(int i=0; i<n; i++)
        {
                if(sum-v[i]==v[i]-nums[i]) return i;
        }
        return -1;
}
};
