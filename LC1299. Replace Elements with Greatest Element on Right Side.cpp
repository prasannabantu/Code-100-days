// 1299. Replace Elements with Greatest Element on Right Side
class Solution {
public:
vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        ans.push_back(-1);
        int n=arr.size();
        int maxi=-1;
        for(int i=n-1; i>=0; i--)
        {
                if(arr[i]>=maxi)
                {
                        ans.push_back(arr[i]);
                        maxi=arr[i];
                }
                else
                        ans.push_back(maxi);
        }
        vector<int>ans2;
        for(int i=ans.size()-2; i>=0; i--)
                ans2.push_back(ans[i]);

        return ans2;

}
};
