




class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
        int l=candies.size();
        for(int i=0;i<l;i++)
            maxi=max(maxi,candies[i]);
        vector<bool>r(l);
        for(int i=0;i<l;i++)
        {
            r[i]= candies[i]+extraCandies>=maxi;
        }
        return r;
    }
};
