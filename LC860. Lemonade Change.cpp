class Solution {
public:
bool lemonadeChange(vector<int>& bills) {
        int cnt5=0; int cnt10=0;
        for(auto i:bills)
        {
                if(i==5) cnt5++;
                else
                {
                        if(i==10)
                        {
                                cnt10++;
                                if(cnt5>0) cnt5--;
                                else return 0;
                        }
                        else
                        {
                                if(cnt10>0) {cnt10--; i-=10;}
                                if(i==10)
                                {
                                        if(cnt5>0) {cnt5--;}
                                        else return 0;
                                }
                                else
                                {
                                        if(cnt5>2) {cnt5-=3;}
                                        else return 0;
                                }
                        }
                }
        }
        return 1;
}
};
