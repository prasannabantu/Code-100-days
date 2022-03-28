class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=0; int j=num;
        int ans=0;
        while(i<=j)
        {
            long m=i+(j-i)/2;
            if((long)(m*m)==num) return 1;
            if((long)(m*m)<num) i=m+1;
            else j=m-1;
        }
        return 0;
    }
};
