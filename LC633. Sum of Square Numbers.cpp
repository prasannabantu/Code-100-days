class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0; long long j=sqrt(c);
        if(c==0 || c==1 || c==2) return 1;
        while(i<=j)
        {
              long long t=i*i+j*j;
             if(t==c) {  return 1;}
             if(t>c) j--;
            else i++;
        }
        return 0;
    }
};
