class Solution {
public:
string addBinary(string a, string b) {
        int m=a.size();
        int n=b.size();
        string ans="";
        int i=m-1; int j=n-1;
        int carry=0;
        while(i>=0 && j>=0)
        {
                int sum=a[i]+b[j]-'0'-'0'+carry;
                ans.push_back('0'+sum%2);
                carry=sum/2;
                i--; j--;
        }
        while(i>=0)
        {
                int sum=a[i]-'0'+carry;
                ans.push_back('0'+sum%2);
                carry=sum/2;
                i--;
        }

        while(j>=0)
        {
                int sum=b[j]-'0'+carry;
                ans.push_back('0'+sum%2);
                carry=sum/2;
                j--;
        }

        if(carry) ans.push_back('0'+carry);
        reverse(ans.begin(),ans.end());
        return ans;
}

};
