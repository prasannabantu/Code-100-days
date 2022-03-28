int arrangeCoins(int n) {
        long t=n; long ans;
        long i=1; long j=t;
        while(i<=j)
        {
            long mid=i+(j-i)/2;
            if(((mid)*(mid+1))<=2*t)
            {
                ans=mid;
                i=mid+1;
            }
            else
                j=mid-1;
        }
        return ans;
    }
