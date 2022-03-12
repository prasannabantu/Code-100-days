1828. Queries on Number of Points Inside a Circle
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& po, vector<vector<int>>& qu)     {
        int nP=po.size(),nQ=qu.size();
        int count=0;
        vector<int>ans;
        for(int i=0;i<nQ;i++)
        {
            int r=qu[i][2]*qu[i][2];
            for(int j=0;j<nP;j++)
            {
                if(dist(po[j],qu[i])<=r) count++;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }

    float dist(vector<int>&P, vector<int>&Q)
    {
        int d1=P[0]-Q[0]; int d2=Q[1]-P[1];
        return (d1*d1+d2*d2);
    }

};
