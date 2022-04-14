class Solution {
public:
int value(string &s)
{
        int n=s.size();
        int num=(int) pow(10,n);
        int res=0;
        for(auto i:s)
        {
                res+=(i-'a')*num;
                num/=10;
        }
        return res;
}
bool isSumEqual(string f, string s,string t) {
        if(value(f)+value(s)==value(t)) return 1;
        return 0;
}
};
