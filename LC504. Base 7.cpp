class Solution {
public:
string convertToBase7(int num) {
        if(num==0) return "0";
        string ans;
        int f=0; if(num<0) { num*=-1; f=1;}

        while(num)
        {
                ans.push_back((char)((num%7)+'0'));
                num=num/7;
        }
        if(f==1) ans.push_back('-');
        reverse(ans.begin(),ans.end());

        return ans;
}
};
