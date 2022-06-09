class Solution {
public:
string intToRoman(int num) {
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        string res="";

        for(int i=0; num>0 && i<=12; i++)
        {
                if(val[i]<=num)
                {
                        while(val[i]<=num)
                        {
                                num-=val[i];
                                res+=sym[i];
                        }
                }
        }
        return res;
}
};
