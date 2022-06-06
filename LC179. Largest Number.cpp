class Solution {
public:
static bool isB(int m,int n)
{
        string a=to_string(m);
        string b=to_string(n);
        string n1=a+b;
        string n2=b+a;
        if(stol(n1)>stol(n2)) return 1;
        return 0;
}
string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),isB);

        string ans="";
        bool f=0;
        for(auto i:nums)
        {
                ans+=to_string(i);
                if(i!=0) f=1;
        }
        if(f==0) return "0";
        return ans;
}
};
