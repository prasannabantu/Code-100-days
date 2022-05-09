class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;
        int i=n-1;
        int carry=1;

        while(i>=0)
        {
                digits[i]+=carry;
                ans.push_back((digits[i])%10);
                carry=digits[i]/10;
                i--;
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;

}
};
