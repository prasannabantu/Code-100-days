class Solution {
public:
int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int i=0; int j=n-2;
        int c=0;
        while(i<j)
        {
                i++;
                c+=piles[j];
                j-=2;
        }
        return c;
}
};
