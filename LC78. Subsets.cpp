// 78. Subsets
class Solution {
public:

vector<vector<int> > subsets(vector<int>& nums) {
        int n=nums.size();

        vector<vector<int> >res;
        int num=pow(2,n);
        for(int i=0; i<num; i++)
        {
                vector<int>tmp;
                for(int j=0; j<n; j++)
                {

                        if(i & 1<<j)
                                tmp.push_back(nums[j]);
                }

                res.push_back(tmp);
        }
        return res;

}
};
