class Solution {
public:
string largestGoodInteger(string num) {
        int n=num.size();
        int maxii=-1;
        for(int i=0; i<=n-3; i++)
        {
                if(num[i]==num[i+1] && num[i+1]==num[i+2])
                {
                        maxii=max(maxii,stoi(num.substr(i,3)));
                }
        }
        if(maxii==-1) return "";
        if(maxii==0) return "000";
        return to_string(maxii);
}
};
