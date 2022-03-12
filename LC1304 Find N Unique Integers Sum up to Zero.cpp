

class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int>a;
        if(n%2)
        {
            for(int i=1;i<=(n-1)/2;i++)
            {
                a.push_back(i+1);
                a.push_back(-1*(i+1));
            }
            a.push_back(0);
        }
        else
        {
            for(int i=1;i<=n/2;i++)
            {
                a.push_back(i+1);
                a.push_back(-1*(i+1));
            }

        }
        return a;
    }
};
