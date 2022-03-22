//LC812 Largest Triangle Area
class Solution {
public:
    float area(vector<int>a,vector<int>b,vector<int>c)
    {
        //x1(y2− y3) + x2(y3− y1) + x3(y1− y2)

        //x1=a[0] y1=a[1]
        //x2=b[0] y2=b[1]
        //x3=c[0] y3=c[1]
        //               x1 *(y2− y3)+   x2 * (y3− y1) +  x3 * (y1− y2)
        return 0.5*abs(a[0]*(b[1]-c[1])+b[0]*(c[1]-a[1])+c[0]*(a[1]-b[1]));
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        float maxi=0.0;
        int n=points.size();
        for(int i=0;i<n-2;i++)
            for(int j=i+1;j<n-1;j++)
                for(int k=j+1;k<n;k++)
                {
                    float temp=area(points[i],points[j],points[k]);
                    maxi=max(temp,maxi);
                }
        return maxi;
    }
};
