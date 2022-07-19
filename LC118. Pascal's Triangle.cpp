class Solution {
public:
vector<vector<int> > generate(int n) {
        vector<vector<int> >ans(1,vector<int>(1,1));
        if(n==1) return ans;
        vector<int>u(1,1);
        vector<int>d(2,1);
        ans.push_back(d);
        if(n==2) return ans;

        for(int i=3; i<=n; i++)
        {
                u.resize(i-1);
                u=d;
                d.resize(i);
                d[0]=1; d[i-1]=1;
                for(int k=1; k<i-1; k++)
                        d[k]=u[k]+u[k-1];
                ans.push_back(d);
        }
        return ans;
}
};



class Solution {
public:
vector<vector<int> > generate(int numRows) {
        vector<vector<int> >res;
        vector<int>up(1,1);
        res.push_back(up);
        if(numRows==1) return res;
        vector<int>down=up;
        down.push_back(1);
        res.push_back(down);
        up=down;
        for(int i=3; i<=numRows; i++)
        {
                down.resize(i);
                down[0]=1;
                for(int j=1; j<=i-2; j++)
                {
                        down[j]=up[j-1]+up[j];
                }
                down[i-1]=1;
                res.push_back(down);
                up=down;
        }
        return res;

}
};
