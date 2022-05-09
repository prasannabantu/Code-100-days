class Solution {
public:
vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        vector<int>ans;
        int i=n-1;
        int carry=0;
        while(k && i>=0)
        {
                int sum=k%10+num[i--]+carry;
                ans.push_back(sum%10);
                carry=sum/10;
                k/=10;
        }
        while(i>=0)
        {
                int sum=num[i--]+carry;
                ans.push_back(sum%10);
                carry=sum/10;
        }
        while(k)
        {

                int sum=k%10+carry;
                ans.push_back(sum%10);
                carry=sum/10;  k/=10;
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;


}
};
