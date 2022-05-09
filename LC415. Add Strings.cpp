class Solution {
public:

int addc(char a,char b)
{
        return a + b -'0'-'0';
}

string addStrings(string num1, string num2) {
        int m=num1.size(); int n=num2.size();
        int i=m-1; int j=n-1;
        string ans="";
        bool f; int carry=0;

        while(i>=0 && j>=0)
        {
                int k=addc(num1[i],num2[j])+carry;
                carry=k/10;
                ans.push_back('0'+(k%10)); //cout<<k<<" ";
                i--; j--;
        }
        while(i>=0)
        {
                int k=num1[i]-'0'+carry;
                carry=k/10;
                ans.push_back('0'+(k%10));
                i--;
        }
        while(j>=0)
        {
                int k=num2[j]-'0'+carry;
                carry=k/10;
                ans.push_back('0'+(k%10));
                j--;
        }
        if(carry)
                ans.push_back(carry+'0');

        reverse(ans.begin(),ans.end());
        return ans;

}
};
