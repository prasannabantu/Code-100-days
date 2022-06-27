class Solution {
public:
int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int t = tickets[k];
        int sum=0;
        for(int i=0; i<n; i++)
        {
                sum+=min(t-(i>k),tickets[i]);
        }
        return sum;
}
};
