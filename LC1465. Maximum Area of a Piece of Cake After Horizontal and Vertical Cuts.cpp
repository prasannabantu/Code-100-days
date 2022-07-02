
class Solution {
public:
long maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {
        const long long mod=1E9+7;
        vector<int>hp;
        vector<int>vp;
        int m = hC.size();
        int n = vC.size();

        sort(hC.begin(),hC.end());
        sort(vC.begin(),vC.end());

        hp.push_back(hC[0]);
        for(int i=1; i<m; i++)
        {
                hp.push_back(hC[i]-hC[i-1]);
        }
        hp.push_back(h-hC[m-1]);

        vp.push_back(vC[0]);
        for(int i=1; i<n; i++)
        {
                vp.push_back(vC[i]-vC[i-1]);
        }
        vp.push_back(w-vC[n-1]);

        long long int a=*max_element(hp.begin(),hp.end());
        long long int b=*max_element(vp.begin(),vp.end());
        return ((a%mod)*(b%mod))%mod;
}
};
