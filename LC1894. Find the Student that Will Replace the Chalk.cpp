class Solution {
public:
int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        vector<long>a(n,0);
        a[0]=chalk[0];
        for(int i=1; i<n; i++)
                a[i]=a[i-1]+chalk[i];

        k%=a[n-1];
        int l=0;
        int r=n-1;
        while(l<r)
        {
                int mid=l+(r-l)/2;
                if(a[mid]<=k)
                {
                        l=mid+1;

                }
                else
                        r=mid;
        }
        return l;

}
};
