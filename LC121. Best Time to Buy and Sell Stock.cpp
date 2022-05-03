int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int op=0; int bp=INT_MAX;

        for(int i=0; i<n; i++)
        {
                if(prices[i]<bp)
                        bp=prices[i];
                op=max(op,prices[i]-bp);
        }
        return op;

}
