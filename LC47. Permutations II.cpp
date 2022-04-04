class Solution {
public:
    int fact(int n)
    {
        int ans=1;
        for(int i=2;i<=n;i++)
            ans*=i;
        return ans;
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>cou(21,0);
        int n=nums.size();
        for(auto i:nums)
        {
            cou[i+10]++; cout<<i<<" --";
            cout<<cou[i+10]<<" ";
        }
        int oc=0; int rc=1;
        for(auto i:cou)
        {
            if(i>0)
            {
                oc++;
                if(i>1)
                { rc*=fact(i); cout<<"--"<<fact(i)<<"---";}
            }
        }
        cout<<oc<<" "<<rc<<"\n";
        int nt=fact(n)/rc;
        int j; int k=0; int l;

        vector<vector<int>>ans;
        for(int i=0;i<nt;i++)
        {
            k=n-2;
            while(k>=0)
            {
                if(nums[k]<nums[k+1]) break;
                k--;
            }
            if(k<0) { reverse(nums.begin(),nums.end()); ans.push_back(nums);}
            else
            {
                 l=n-1;
                 while(l>k)
                 {
                     if(nums[l]>nums[k]) break;
                     l--;
                 }
                 swap(nums[l],nums[k]);
                reverse(nums.begin()+k+1,nums.end());
                ans.push_back(nums);
            }
        }


        return ans;
    }
};
