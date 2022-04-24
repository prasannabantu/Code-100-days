class Solution {
public:
bool checkZeroOnes(string s) {
        int max1=0; int max0=0;
        int c0=0; int c1=0;
        if(s[0]=='1') { c1=1; max1=1;}
        else { c0=1; max0=1;}
        int n=s.size();
        if(n==1 && c1==1) return 1;
        if(n==1 && c0==1) return 0;
        for(int i=1; i<n; i++)
        {
                if(s[i]=='1')
                {
                        c1++;
                        max1=max(max1,c1);
                        c0=0;
                }
                else
                {
                        c0++;
                        max0=max(max0,c0);
                        c1=0;
                }
        }
        cout<<max1<<" "<<max0;
        return max1>max0;
}
};
