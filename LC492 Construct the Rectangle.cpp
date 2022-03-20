class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        int sq=sqrt(area);
        for(int i=sq;i>=1;i--)
        {
            if(area%i==0)
            {
                   ans.push_back(area/i);
                   ans.push_back(i);
                   break;
            }
        }

        return ans;
    }

 };
