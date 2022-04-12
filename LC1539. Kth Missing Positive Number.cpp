class Solution {
public:
int findKthPositive(vector<int>& a, int k) {
        int n=a.size();
        int i=0; int j=n-1;
        int ans=-1; int mid;

        while(i<=j)
        {
                mid=i+(j-i)/2;
                int diff=a[mid]-(mid+1);
                if(diff>=k) j=mid-1;
                else
                {
                        ans=mid;
                        i=mid+1;
                }
        }
        if(ans==-1) return k;
        int d=a[ans]-(ans);
        d--;
        return a[ans]+(k-d);
}
};
