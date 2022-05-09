class Solution {
public:
int eraseOverlapIntervals(vector<vector<int> >& intervals) {
        int c=0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int count=0;
        int preEnd=intervals[0][1];
        for(int i=1; i<n; i++)
        {
                if(intervals[i][0]>=preEnd)
                        preEnd=intervals[i][1];
                else
                {
                        c++;
                        preEnd=min(preEnd,intervals[i][1]);
                }
        }
        return c;
}
};
