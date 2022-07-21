class Solution {
public:
void helper(vector<vector<int> >&res,vector<int>&tmp,int beg,int n,int k)
{
        if(tmp.size()==k) {res.push_back(tmp); return;}

        for(int i=beg; i<=n; i++)
        {
                tmp.push_back(i);
                helper(res,tmp,i+1,n,k);
                tmp.pop_back();
        }
}
vector<vector<int> > combine(int n, int k) {
        vector<vector<int> >res;
        vector<int>temp;
        helper(res,temp,1,n,k);
        return res;
}
};
