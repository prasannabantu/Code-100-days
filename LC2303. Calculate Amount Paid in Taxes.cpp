class Solution {
public:
double calculateTax(vector<vector<int> >& br, int income) {
        double sum=0;
        if(income<=0) return sum;
        int n=br.size();
        int prev=0;
        for(int i=0; i<n; i++)
        {
                int act=min(income,br[i][0]);
                sum+=((act-prev)*br[i][1]*1.0)/100.0;
                if(br[i][0]>=income)
                {
                        break;
                }
                prev=br[i][0];
        }
        return sum;
}
};
