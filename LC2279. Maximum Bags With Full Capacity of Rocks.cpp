class Solution {
public:
int maximumBags(vector<int>& capacity, vector<int>& rocks, int ar) {
        vector<int>diff;
        int n=capacity.size();
        for(int i=0; i<n; i++)
        {
                diff.push_back(capacity[i]-rocks[i]);
        }
        sort(diff.begin(),diff.end());
        int c=0;
        int i=0;
        while(i<n && ar>=diff[i])
        {
                c++;
                ar-=diff[i];
                i++;
        }
        return c;
}
};
