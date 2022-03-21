// LC1779 Find Nearest Point That Has the Same X or Y Coordinate
class Solution {
public:
    int manhat(int x1,int y1,int x2,int y2)
    {
        return abs(x1-x2)+abs(y1-y2);
    }
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int dis=0; int mini=INT_MAX; int ind=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                dis=manhat(x,y,points[i][0],points[i][1]);
                if(mini>=dis)
                {
                    ind=i;
                    mini=dis;
                }
            }

        }
        return ind;
    }
};
