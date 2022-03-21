//LC1232 Check If It Is a Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        float slope=((c[1][1]-c[0][1])*1.0)/(c[1][0]-c[0][0]);
        int n=c.size();
        if(n==2) return 1;
        float s2;

        for(int i=1;i<n;i++)
        {
            if(c[i][0]-c[i-1][0]==0) return onecon(c,n);
            s2=((c[i][1]-c[i-1][1])*1.0)/(c[i][0]-c[i-1][0]);
            if(s2!=slope) return 0;
        }
        return 1;
    }

    bool onecon(vector<vector<int>>a,int n)
    {
        for(int i=1;i<n;i++)
            if(a[i][0]!=a[i-1][0]) return 0;
        return 1;
    }
};
