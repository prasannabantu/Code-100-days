class Solution { 
public:
long long ncount(int n)
{
        long long t=n;
        return (t*(t+1))/2;
}
long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        long long int zcount=0;
        int beg=0;
        int end=0;
        while(end<n)
        {
                while(beg<n && nums[beg]!=0) beg++;
                end=beg;
                while(end<n && nums[end]==0) end++;
                zcount+=ncount(end-beg);
                beg=end+1;

        }
        return zcount;
}


};
