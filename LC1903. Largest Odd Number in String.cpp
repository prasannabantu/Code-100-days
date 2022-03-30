class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int n=num.size()-1;
        int b=0; int e=0; int best=0; int temp=0; int bb=0,be=-1;
        while(e<=n)
        {

            if((num[e]-'0')%2==1) be=e;
             e++;
        }


        if(be==-1) return ans;
        ans=num.substr(0,be+1);
        return ans;

    }
};
