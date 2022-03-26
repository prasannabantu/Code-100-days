// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=0; int j=n; int ans;
        // T T T T T F F F F F
        // 1 2 3 4 5 6 7 8 9 10
        while(i<=j)
        {
            int m=i+(j-i)/2;
            if(isBadVersion(m))
            {
                ans=m; j=m-1;
            }
            if(!isBadVersion(m)) i=m+1;
            else j=m-1;
        }
        return ans;
    }
};
