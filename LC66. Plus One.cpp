class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int e=digits[n-1]+1;
        digits[n-1]+=1;
        for(int i=n-1; i>=1; i--)
        {
                digits[i]=e%10;
                if(e>=10)
                {
                        e=e/10;
                        e+=digits[i-1];
                }
                else
                        e=digits[i-1];
        }
        digits[0]=e;
        cout<<digits[0]<<"\n";
        vector<int>ext(n+1);
        if(digits[0]>=10)
        {
                ext[0]=1;
                ext[1]=0;
                for(int j=1; j<=n-1; j++)
                        ext[j+1]=digits[j];
                return ext;
        }
        return digits;

}
};
