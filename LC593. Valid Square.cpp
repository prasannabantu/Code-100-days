class Solution {
public:
int dist(vector<int>a,vector<int>b)
{
        return (b[1]-a[1])*(b[1]-a[1])+(b[0]-a[0])*(b[0]-a[0]);
}

bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int> >points={p1,p2,p3,p4};
        set<int>leng;
        for(int i=0; i<3; i++)
        {
                for(int j=i+1; j<4; j++)
                {
                        int k=dist(points[i],points[j]);
                        if(k!=0)
                                leng.insert(k);
                        else
                                return false;
                }
        }
        return leng.size()==2;
}
};
