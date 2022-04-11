class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>>ans(1,vector<int>(1,1));

        vector<int>u(1,1);
        vector<int>d(2,1);
        ans.push_back(d);
        if(n==1) return d;
        if(n==2) return {1,2,1};

        for(int i=3;i<=n+1;i++)
        {
            u.resize(i-1);
            u=d;
            d.resize(i);
            d[0]=1; d[i-1]=1;
            for(int k=1;k<i-1;k++)
                d[k]=u[k]+u[k-1];
            ans.push_back(d);
        }
        return ans[n];
    }
};
