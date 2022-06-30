class Solution {
public:
int findTheWinner(int n, int k) {
        queue<int>qu;
        for(int i=1; i<=n; i++)
        {
                qu.push(i);
        }

        while(qu.size()!=1)
        {
                for(int i=1; i<k; i++)
                {
                        int t=qu.front();
                        qu.pop();
                        qu.push(t);
                }
                qu.pop();
        }
        return qu.front();
}
};
