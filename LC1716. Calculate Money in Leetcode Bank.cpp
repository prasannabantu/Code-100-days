class Solution {
public:
int totalMoney(int days) {
        int prev=1;
        int pres=1;
        int sum=0;
        int pcount=1;

        while(days--)
        {
                // cout<<pres<<" ";
                sum+=pres++;
                pcount++;
                if(pcount==8)
                {
                        pres=++prev;
                        pcount=1;
                }
        }


        return sum;
}
};
