// 1512. Number of Good Pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        int n=a.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j]) count++;
            }
        }
        return count;
    }
};
