class Solution {
public:
int largestAltitude(vector<int>& gain) {
        int maxii=0;
        int sum=0;
        for(int i=0; i<gain.size(); i++)
        {
                maxii=max(maxii,sum);
                sum+=gain[i];
        }
        maxii=max(maxii,sum);
        return maxii;
}
};
