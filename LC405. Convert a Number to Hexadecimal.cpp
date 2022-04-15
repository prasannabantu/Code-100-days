// 405. Convert a Number to Hexadecimal
class Solution {
public:
char valc(int n)
{
        if(n<=9) return (char)(n+'0');
        return (char)(n-10+'a');
}

string toHex(int n) {
        unsigned num=n;
        string ans="";
        if(n==0) return "0";
        while(num)
        {
                ans+=valc(num%16);
                num/=16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
};
