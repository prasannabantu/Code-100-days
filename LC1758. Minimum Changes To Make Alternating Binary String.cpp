class Solution {
public:
int minOperations(string s) {
        char c1='0';
        char c2='1';
        int cnt1=0; int cnt2=0;
        for(auto i:s)
        {
                if(i!=c1) cnt1++;
                if(i!=c2) cnt2++;
                c1=  c1=='0' ? '1':'0';
                c2=  c2=='1' ? '0':'1';
        }
        return min(cnt1,cnt2);
}
};
