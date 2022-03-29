class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>minL;
        int n=rectangles.size();
        int maxii=-1; int temp=-1; int c=0;
        for(int i=0;i<n;i++)
        {
            temp=min(rectangles[i][0],rectangles[i][1]);
            minL.push_back(temp);
            maxii=max(temp,maxii);
        }


         for(int i=0;i<n;i++)
        {
             if(minL[i]==maxii) c++;
         }
        return c;

    }
};
